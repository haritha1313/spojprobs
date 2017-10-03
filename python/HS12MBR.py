'''
Does not work
-> why?
'''

def line_bounds(x1,y1,x2,y2):
    return [x1,y1,x2,y2]

def circle_bounds(x,y,r):
    return [x-r,y-r,x+r,y+r]

def point_bounds(x,y):
    return [x,y,x,y]

if __name__ == '__main__':
    nr_test_cases = int(input())

    for i in range(nr_test_cases):
        nr_objects = int(input())

        bounds = []
        for j in range(nr_objects):
            inp_line = input().split(' ')
            coords = list(map(int, inp_line[1:]))
            if inp_line[0] == 'p':
                bounds.append(point_bounds(*coords))
            elif inp_line[0] == 'c':
                bounds.append(circle_bounds(*coords))
            elif inp_line[0] == 'l':
                bounds.append(line_bounds(*coords))
        
        out_bounds = [1000,1000,-1000,-1000]

        for k in bounds:
            out_bounds = [
                    min(out_bounds[0],k[0]),
                    min(out_bounds[1],k[1]),
                    max(out_bounds[2],k[2]),
                    max(out_bounds[3],k[3]),
                    ]


        print('{:d} {:d} {:d} {:d}'.format(*out_bounds))
        junk = input()
