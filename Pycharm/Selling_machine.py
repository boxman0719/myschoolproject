Drpepper = 10
cider = 10
drprice = 400
ciprice = 800
while True:
    cash = int(input("type the cash:"))
    if cash < 800 and cash >= 400:
        print("you got drpepper!")
        Drpepper = Drpepper - 1
        print()
    elif cash >= 800:
        print("you got cider!")
        cider = cider - 1
    elif cash>400:
        print("Not enough money!")
    elif not Drpepper or cider:
        print("no soda!")
    else:
        break