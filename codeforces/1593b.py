for _ in range(int (input())):
    ans = 0
    s = input()
    n = len(s)
    for i in range(n-1):
        for j in range(i+1,n):
            if(int(s[i] + s[j])) % 25 ==0:
                ans = n-i-2
    print(ans)            