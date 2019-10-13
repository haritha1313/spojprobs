def computeGCD(x, y): 
   if(y==0):
       return x 
   else:
       return computeGCD(y,x%y)     

      

while (1):
    n,k=map(int,input().split())
    if (n==-1 and k== -1):
        break

    else:
        q2=(n*n-n) #modified becuase 1,2 and 2,1 are diffrent case
        k2=k-2
        cnt=0
        
        if(k%2==0):
             n =k//2-1
             cnt= n*(n+1)*2
        else:
            n = (k-1)//2 
            cnt = n*n*2       
        gcd=computeGCD(cnt,q2)
        p= cnt//gcd
        q=q2//gcd
        ans = p/q
        #print(p+" "+q)
        if ans==0 or ans==1:
            print (int(ans))
        elif p>q:
            print("1")
        else:
            print( str(int(p))+"/"+str(int(q)) )
