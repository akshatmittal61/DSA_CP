ch=int(input("Press 1 for knowing Nth term of an AP and the related problems \n\nPress 2 for knowing Nth term from end of an AP and the related problems\n\nPress 3 for knowing Sum of AP having First term, Number of terms and Common difference and the related problems \n\nPress 4 for knowing sum of AP having number of terms, first terms and last terms and the related problems \n\nPress 5 for finding Airthmatic Mean and the related problems\n\nPress 6 for Problems based on Three Numbers of an AP\n\nPress 7 for Problems based on Four Numbers of an AP OR Quadrilateral Related Problems OR other Related Problems\n\nPress 8 if you have values of 2 terms and have to find things with help of that:   "))
print()


if ch==1:
    a=float(input("Enter the First term:   "))
    print()
    e=input("Do you want to enter Common Difference(d)OR Second Term(b)")
    print()
    if e=="Common Difference" or e=="Common difference" or e=="common Difference" or e=="common difference" or e=="d":
        d=float(input("Enter the Common Difference:   "))
        print()
    elif e=="Second Term" or e=="Second term" or e=="second Term" or e=="second term" or e=="b":
        b=float(input("Enter the Second Term:   "))
        print()
        d=b-a
        print("Therefore the Common Difference is",d)
        print()
        n=int(input("Enter the Number of Terms:"))
        print()
        if n<=0:
            Z=input("Ohh, You don't know the Number of Terms, If yes write Yes OTHERWISE No:   ")
            print()
            if Z=="Yes" or Z=="yes":
                T=float(input("Enter the Nth Term:   "))
                print()
                n=(T+d-a)/d
                m=n%2
                if m==0 or m==1:
                    print("The Number Of Terms in an AP are",n)
                    print()
                else:
                    print(T,"is not the term of the given AP")
            elif Z=="No" or Z=="no":
                n=int(input("Now enter correct Number of Terms:   "))
                print()
                nth_term=a+(n-1)*d
                print("Common Diffence of an AP is",d)
                print()
                print("First Term of an AP is",a)
                print()
                second=a+d
                print("Second Term of an AP is",second)
                print()
                for i in range(1,n-1):
                    third=second+d
                    print("Next Terms are:  ",third)
                    print()
                    a,second=second,third
                print("The required Nth term of an AP is",nth_term)
                print()
            else:
                print("Ohh!!! You have given Wrong Input\n\nTry Again Later...")
        Tnt=a+(n-1)*d
        print("The",n,"term of an AP is",Tnt)
    else:
        print("Ohh!!! You have given Wrong Input\n\nTry Again Later...")



elif ch==2:
    a=float(input("Enter the First term:   "))
    print()
    e=input("Do you want to enter Common Difference(d)OR Second Term(b)")
    print()
    if e=="Common Difference" or e=="Common difference" or e=="common Difference" or e=="common difference" or e=="d":
        d=float(input("Enter the Common Difference:   "))
        print()
    elif e=="Second Term" or e=="Second term" or e=="second Term" or e=="second term" or e=="b":
        b=float(input("Enter the Second Term:   "))
        print()
        d=b-a
        print("Therefore the Common Difference of an AP is",d)
        print()
    else:
        print("Ohh!!! You have given Wrong Input\n\nTry Again Later...")
    l=float(input("Enter the Last Term:   "))
    print()
    n=int(input("Enter the Nth term which you want from end of AP:   "))
    print()
    term_from_end=l-(n-1)*d
    print("The Required Nth term from end of an AP is",term_from_end)
    print()



elif ch==3:
    a=float(input("Enter the First term:   "))
    print()
    k=input("Do you know Number of TermS\n\niF Yes print Yes OTHERWISE No:   ")
    if k=="Yes" or k=="yes":
        n=int(input("Enter the Number of Terms:   "))
        print()
        e=input("Do you want to enter Common Difference(d)OR Second Term(b):   ")
        print()
        if e=="Common Difference" or e=="Common difference" or e=="common Difference" or e=="common difference" or e=="d":
            d=float(input("Enter the Common Difference:   "))
            print()
        elif e=="Second Term" or e=="Second term" or e=="second Term" or e=="second term" or e=="b":
            b=float(input("Enter the Second Term:   "))
            print()
            d=b-a
            print("Therefore the Common Difference of an AP is",d)
            print()
        else:
            print("Ohh!!! You have given Wrong Input\n\nTry Again Later...")
        print()
        sum=n*(2*a+(n-1)*d)/2
        print("The Sum of an AP is",sum)
    elif k=="No" or k=="no":
        e=input("Do you want to enter Common Difference(d)OR Second Term(b):   ")
        print()
        if e=="Common Difference" or e=="Common difference" or e=="common Difference" or e=="common difference" or e=="d":
            d=float(input("Enter the Common Difference:   "))
            print()
            s=float(input("Enter the Sum of an AP:   "))
            print()
            if d==0:
                print("The Common Difference of an AP should not be zero...")
                print("\nAborting!!!!!!!")
            else:
                delta=((2*a-d)*2)-(4(-2*s)*d)
                if delta>0:
                    root1=((-(2*a-d))+((delta)**0.5))/(2*d)
                    root2=((-(2*a-d))-((delta)**0.5))/(2*d)
                    if root1>0:
                        print("The Number of Terms in an AP are",root1)
                        print()
                    elif root2>0:
                        print("The Number of Terms in an AP are",root2)
                        print()
                elif delta==0:
                    root1=-(2*a-d)/(2*a)
                    print("The Number of Terms in an AP are",root1)
                    print()
                else:
                    print("The Number of Terms are COMPLEX and IMAGINARY.")
                    print()
        elif e=="Second Term" or e=="Second term" or e=="second Term" or e=="second term" or e=="b":
            b=float(input("Enter the Second Term:   "))
            print()
            d=b-a
            print("Therefore the Common Difference of an AP is",d)
            print()
        else:
            print("Ohh!!! You have given Wrong Input\n\nTry Again Later...")
    else:
        print("Ohh!!! You have given Wrong Input\n\nTry Again Later...")
        print()
        



elif ch==4:
    a=float(input("Enter the First term:   "))
    print()
    l=float(input("Enter the Last Term:   "))
    print()
    n=int(input("Enter the Number of Terms:   "))
    print()
    if n<=0:
        z=input("Ohh, You don't know the Number of Terms, If yes write Yes OTHERWISE No:   ")
        print()
        if z=="Yes" or z=="yes":
            y=input("Do you want to enter Common Difference(d)OR Second Term(b):   ")
            print()
            if y=="Common Difference" or y=="Common difference" or y=="common Difference" or y=="common difference" or y=="d":
                d=float(input("Enter the Common Difference:   "))
                print()
                n=(l+d-a)/d
            elif y=="Second Term" or y=="Second term" or y=="second Term" or y=="second term" or y=="b":
                b=float(input("Enter the Second Term:   "))
                print()
                d=b-a
                print("Therefore the Common Difference of an AP is",d)
                print()
                n=(l+d-a)/d
            else:
                print("Ohh!!! You have given Wrong Input\n\nTry Again Later...")
                print()
        elif Z=="No" or Z=="no":
            n=int(input("Now enter correct Number of Terms:   "))
            print()
        else:
            print("Ohh!!! You have given Wrong Input\n\nTry Again Later...")
            print()
    sum=n*(a+l)/2
    print()
    print("THe Sum of an AP is",sum)



elif ch==5:
    a=float(input("Enter the First term:   "))
    print()
    b=float(input("Enter the Last Term:   "))
    print()
    n=int(input("Enter the Number of Airthmatic Means you want:   "))
    print()
    d=(b-a)/(n+1)
    first=a+d
    print("The First Airthmatic Mean is",first)
    print()
    for i in range(1,n):
        second=first+d
        third=second+d
        print("Next Airthmatic Mean is",second)
        print()
        first,second=second,third



if ch==6:
    S=float(input("Enter the Sum of 3 Numbers of AP:   "))
    print()
    print("Press (a)for First option\n\n(b)for Second Option\n\n(c) for Third Option...")
    print()
    b=input("Do you want to enter 'Sum of Squares of 3 Numbers',OR 'Product of three Numbers'OR 'Anything ELSE':   ")
    print()
    if b=="Sum of Squares of 3 Numbers" or b=="a" or b=="1":
        p=float(input("Enter the Sum of Squares of 3 Numbers of an AP:   "))
        print()
        a=S/3
        d=((p-3*a*2)/2)**0.5
    elif b=="Product of three Numbers" or b=="b" or b=="2":
        P=float(input("Enter the Product of 3 Numbers of an AP:   "))
        print()
        a=S/3
        d=(a*2-P/a)**0.5 
    print("The First Term of an AP is",a-d)
    print()
    print("The Common Difference of an AP is",d)
    print()
    print("Therefore the three Terms of an AP are: ",a-d, a, a+d,"OR",a+d,a,a-d)



if ch==7:
    S=float(input("Enter the Sum of 4 Numbers of AP:   "))
    print()
    print("Press (a)for First option\n\n(b)for Second Option\n\n(c) for Third Option\n\n(d)for Fourth Option...")
    print()
    a=input("Do you want to enter 'Sum of Squares of 4 Numbers',OR 'Product of extremes to their means'OR 'Quadrilateral Related Problems' OR 'Anything ELSE':   ")
    print()
    if a=="Sum of Squares of 4 Numbers" or a=="a" or a=="1":
        p=float(input("Enter the Sum of Squares of 4 Numbers of an AP:   "))
        print()
        b=S/4
        d=((4*p-S**2)/80)**0.5
        print("The First Term of an AP is",b)
        print()
        print("The Common Difference of an AP is",d)
        print()
        print("Therefore the four Terms of an AP are: ",b-3*d ,b-d, b+d , b+3*d,"OR" ,b+3*d,b+d,b-d, b-3*d) 
    elif a=="Product of extremes to their means" or a=="b" or a=="2":
        b=S/4
        print("RULE:- Please First enter the numerator of ratio of product of extremites to the product of means AND then denominator of ratio of product of extremites to the product of means ")
        print()
        n=int(input("Enter the numerator of ratio of product of extremites to the product of means:   "))
        print()
        m=int(input("Enter the denominator of ratio of product of extremites to the product of means:   "))
        print()
        d=(((b*2(m-n))/(9*m-n))**0.5)
        print("The First Term of an AP is",b-3*d) 
        print()
        print("The Common Difference of an AP is",d)
        print()
        print("Therefore the four Terms of an AP are: ",b-3*d ,b-d, b+d , b+3*d,"OR" ,b+3*d,b+d,b-d, b-3*d)
    elif a=="Quadrilateral Related Problems" or a=="c" or a=="3":
        d=float(input("Enter the Common Difference:   "))
        print()
        b=(360-6*d)/4
        print("Therefore the four Terms of an AP are: ",b,b+d,b+2*d,b+3*d,"OR" ,b+3*d,b+2*d,b+d,b)
    else:
        print("Ohh!!! You have given Wrong Input\n\nTry Again Later...")
        print()




if ch==8:
    n=int(input("Which Term of an AP You Have???...   "))
    print()
    N=float(input("What is the value of that Term:   "))
    print()
    m=int(input("Which Next Term of an AP You Have???...   "))
    print()
    M=float(input("What is the value of that Term:   "))
    print()
    a=N-((M-N)*(n-1))/(m-n)
    d=(M-N)/(m-n)
    print("Therefore, the First Term of an AP is",a)
    print()
    print("Therefore, the Common Difference of an AP is",d)
    print()
    g=input("Now,do you want any Term in an AP:   ")
    print()
    if g=="Yes" or g=="yes":
        k=int(input("Which Nth Term in an AP do You want???... "))
        print()
        nth=a+(k-1)*d
        print("The",k,"th Term of an AP is ",nth)
        print()
        v=input("Do you want any Nth term also:   ")
        print()
        if v=="Yes" or v=="yes":
            s=int(input("Which Nth Term in an AP do You want???... "))
            print()
            Nth=a+(s-1)*d
            print("The",s,"th Term of an AP is ",Nth)
            print()
            c=input("Do you want ratio of these terms\n\nIf Yes print yes OTHERWISE No:   ")
            print()
            if c=="Yes" or c=="yes":
                print("The ratio of ",k,"and",s,"terms is",k,":",s)
                print()
            elif c=="No" or c=="no":
                print("Ohhh... You Don't Want")
                print()
            else:
                print("Ohh!!! You have given Wrong Input\n\nTry Again Later...")
                print()
        elif v=="No" or v=="no":
            print("Ohhh... You Don't Want")
            print()
        else:
            print("Ohh!!! You have given Wrong Input\n\nTry Again Later...")
            print()
    elif g=="No" or g=="no":
        print("Ohhh... You Don't Want")
        print()
    else:
        print("Ohh!!! You have given Wrong Input\n\nTry Again Later...")
        print()
    j=input("Do You want Number of Terms also\n\nIf Yes print Yes OTHERWISE No:   :   ")
    if j=="Yes" or j=="yes":
        T=float(input("Enter the Last Term:   "))
        print()
        n=(T+d-a)/d
        m=n%2
        if m==0 or m==1:
            print("The Number Of Terms in an AP are",n)
            print()
        else:
            print(T,"is not the term of the given AP")
    elif j=="No" or j=="no":
        print("Ohhh... You Don't Want")
        print()
    else:
        print("Ohh!!! You have given Wrong Input\n\nTry Again Later...")
        print()
    k=input("Do you want the AP also\n\nIf Yes print Yes OTHERWISE No:   ")
    if k=="Yes" or k=="yes":
        nth_term=a+(n-1)*d
        print("Common Diffence of an AP is",d)
        print()
        print("First Term of an AP is",a)
        print()
        second=a+d
        print("Second Term of an AP is",second)
        print()
        for i in range(1,n-1):
            third=second+d
            print("Next Terms are:  ",third)
            print()
            a,second=second,third
        print("The required Nth term of an AP is",nth_term)
        print()
    elif k=="No" or k=="no":
        print("Ohhh... You Don't Want")
        print()
    else:
        print("Ohh!!! You have given Wrong Input\n\nTry Again Later...")
        print()
    t=input("Do you want the Sum of AP also\n\nIf Yes print Yes OTHERWISE No:   ")
    if t=="Yes" or t=="yes":
        l=int(input("Enter the Nth Term:   "))
        sum=l*(2*a+(n-1)*d)
        print("The Sum of an AP is ",sum)