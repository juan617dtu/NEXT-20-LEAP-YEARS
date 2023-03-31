import java.text.NumberFormat;
import java.text.ParsePosition;
import java.util.Scanner;

public class Main {
	
	static final String ANSI_GREEN = "\u001B[32m";
	static final String ANSI_WHITE = "\u001B[0m";
	static final String ANSI_RED = "\u001B[34m";
	static Scanner cin = new Scanner(System.in);
	
	static boolean isDigit(String str) {
		
		ParsePosition pos = new ParsePosition(0);
		NumberFormat.getInstance().parse(str, pos);
		return str.length() == pos.getIndex();
	}
	
	static void yearCheck(int y) {
		
		if (y % 400 == 0 || y % 4 == 0) System.out.print(y + " is a leap year.");
		else if (y % 100 == 0) System.out.print(y + " is not a leap year.");
		else { System.out.print(y + " is not a leap year."); }
	}
	
	static void next20LeapYears(int y) {
		int i = 0, j = 1;
	    
	    while (i < 20)
	    {
	        if ((y + j) % 400 == 0 || (y + j ) % 4 == 0)
	        {
	            if (i == 0) System.out.println("\t" + (y + j));
	            else { System.out.println("\t\t\t\t\t" + (y + j)); }
	            i++;
	        }
	        j++;
	    }
	}
	public static void main(String[] args) {
		
		System.out.println(ANSI_RED + "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		System.out.println("~\t\t\tLEAP YEAR TEST\t\t\t~");
		System.out.println("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
		+ ANSI_WHITE );
		
		String data;
	
		System.out.print("ENTER YEAR: ");
		data = cin.nextLine();
		data = data.trim();
		
		if (!isDigit(data)) { 
			System.out.println("ERROR: INVALID INPUT"); 
			System.exit(0);
		}
		int year = Integer.parseInt(data);
		//System.out.print(varYear);
		yearCheck(year);
		
		System.out.print("\n\n\nNEXT 20 LEAP YEARS FROM INPUT YEAR: ");
		next20LeapYears(year);
		
		System.out.println(ANSI_GREEN + "\n\n");
	}

}
