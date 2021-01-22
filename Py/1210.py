menu = [0, 400, 340, 170, 100, 70]

a,b = map(int, input().split())

sum = menu[a] + menu[b]

if(sum > 500):
    print('angry')
else:
    print('no angry')
