class Colors:
    
    purple = "\033[95m"
    green = "\033[92m"
    reset = "\033[0m"
    yellow = "\033[93m"

print(Colors.purple + "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
print("~\t\t\tLEAP YEAR TEST\t\t\t~")
print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" + Colors.reset)

while True:
    varYear = input("ENTER YEAR: ")
    varYear = varYear.strip()
    if varYear.isdigit():
        year = int(varYear)
        break
    else:
        print(Colors.yellow + "INVALID INPUT." + Colors.reset)

if year % 400 == 0 or year % 4 == 0:
    print("{0} is a leap year.".format(year))
elif year % 100 == 0:
    print("{0} is not a leap year.".format(year))
else:
    print("{0} is not a leap year.".format(year))

i = 0
j = 1
print("\n\n\nNEXT 20 LEAP YEARS FROM INPUT YEAR: ", end='')
while (i < 20):
    if (year + j) % 400 == 0 or (year + j) % 4 == 0:
        if i == 0:
            print(Colors.green + "\t{0}".format(year + j) + Colors.reset)
        else:
            print(Colors.green + "\t\t\t\t\t{0}".format(year + j) + Colors.reset)
        i += 1
    j += 1

print(Colors.yellow)
