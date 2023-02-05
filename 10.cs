void yearCheck(int y)
{
    if (y % 400 == 0) Console.Write(y + " is a leap year.");
    else if (y % 100 == 0) Console.Write(y + " is not a leap year.");
    else if (y % 4 == 0) Console.Write(y + " is a leap year.");
    else
    {
        Console.Write(y + " is not a leap year.");
    }
}

void next20LeapYears(int y)
{
    int i = 0, j = 1;
    
    while (i < 20)
    {
        if ((y + j) % 400 == 0 || (y + j ) % 4 == 0)
        {
            if (i == 0) Console.WriteLine("\t" + y + j);
            else
            {
                Console.WriteLine("\t\t\t\t\t" + y + j);
            }
            i++;
        }
        j++;
    }
}

Console.ForegroundColor = ConsoleColor.Red;
Console.WriteLine("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
Console.WriteLine("~\t\t\tLEAP YEAR TEST\t\t\t~");
Console.WriteLine("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
Console.ForegroundColor = ConsoleColor.White;

try
{
    Console.Write("ENTER YEAR: ");
    string year = Console.ReadLine();
    int varYear = int.Parse(year);
    yearCheck(varYear);
    Console.Write("\n\n\nNEXT 20 LEAP YEARS FROM INPUT YEAR: ");
    next20LeapYears(varYear);
} 
catch (FormatException fE) 
{
    Console.WriteLine("\n" + fE.Message);
}

Console.ForegroundColor = ConsoleColor.Green;
Console.WriteLine("\n\n");

return 0;
