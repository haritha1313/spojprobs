#include <iostream>
#include <algorithm>
#include <map>

int factorial(int n)
{
    return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main() {
    int case_num = 0;

    //Amount of cases
    std::cout << "Input:" << std::endl;
    std::cin >> case_num;

    //Array holding teams in each case
    int num_teams[case_num];

    for(int d = 0; d < case_num; ++d) {
        std::cout << std::endl << "Number of teams" << std::endl;
        std::cin >> num_teams[0];

        //Array holding teams names
        std::string teams[num_teams[0]];

        //Map holding preference place for each team
        std::map <std::string, int> pref_place;

        //Receiving Teams names and their preferred place
        std::cout << "Enter Team name and preferred Place" << std::endl;
        for(int a = 0; a < num_teams[0]; ++a){
            int tmp  = 0;
            std::cin >> teams[a] >> tmp;
            pref_place[teams[a]] = tmp;
        }

        //Sort teams in alphabetic order
        std::sort(teams, teams + num_teams[0]);

        //Calculating badness
        int total_badness_fac = 0;
        int result_arr[factorial(num_teams[0])];
        int b = 0;

        do {
            for(int a = 0; a < num_teams[0]; ++a){
                int curr_badness_fac = abs(pref_place[teams[a]] - (a + 1));
                total_badness_fac += curr_badness_fac;
            }
            result_arr[b] = total_badness_fac;
            ++b;
            total_badness_fac = 0;
        } while(std::next_permutation(teams, teams + num_teams[0]));

        //Sort array descending
        std::sort(result_arr, result_arr + factorial(num_teams[0]));

        //Print out result
        std::cout << "Output:" << std::endl;
        std::cout << result_arr[0] << std::endl;
    }

    return 0;
}