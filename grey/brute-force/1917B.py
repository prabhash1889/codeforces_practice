import sys

def solve():
    n=int(input().strip())
    s=input().strip()
    cnt=[0]*26
    dist=0
    ans=0

    for c in s:
        if cnt[ord(c)-ord('a')]==0:
            dist+=1
        cnt[ord(c)-ord('a')]+=1
        ans+=dist
    
    print(ans)



def main():
    sys.stdin=open(0)
    t=int(input().strip())
    for _ in range(t):
        solve()
    

if __name__=="__main__":
    main()