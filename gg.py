MOD = 10**9 + 7

def solve():
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    
    max_val = max(a)
    results = []
    
    for _ in range(m):
        op, l, r = input().split()
        l, r = int(l), int(r)
        
        if l <= max_val <= r:
            if op == '+':
                max_val += 1
            elif op == '-':
                max_val -= 1
        
        results.append(max_val)
    
    print(" ".join(map(str, results)))

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()