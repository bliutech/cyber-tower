package cowslay;

class Cowslay {
    public static void main(String[] args){
        if(args.length == 0 || args[0] == "-h" || args[0] == "--help"){
            System.out.println("Usage: Cowslay [args]. Please add a phrase. That would be so slay!");
        }

        else if(args[0].equals("yEe-HaW_CoWs1@y!")){
            System.out.println("flag{yEe-HaW_CoWs1@y!}");
        }

        else{
            System.out.print(" ");
            for(int i = 0; i < arrayLength(args) + 8; i++){
                System.out.print("=");
            }

            System.out.println();
            System.out.print("<    ");

            for (String x : args){
                System.out.print(x);
                System.out.print(" ");
            }
            System.out.println("   >");
            System.out.print("<" + (arrayLength(args) % 2 == 1 ? " " : "") + " ".repeat(arrayLength(args)/2));
            System.out.println("Slay! 💅" + " ".repeat(arrayLength(args)/2) + ">");

            System.out.print(" ");
            for(int i = 0; i < arrayLength(args) + 8; i++){
                System.out.print("=");
            }
            System.out.println();

            System.out.println(" ".repeat(arrayLength(args)/5) + "       \\   ^__^");
            System.out.println(" ".repeat(arrayLength(args)/5) + "        \\  (oo)\\_______");
            System.out.println(" ".repeat(arrayLength(args)/5) + "           (__)\\       )\\/\\");
            System.out.println(" ".repeat(arrayLength(args)/5) + "               ||----w |");
            System.out.println(" ".repeat(arrayLength(args)/5) + "               ||     ||");
        }
    }

    public static int arrayLength(String[] array){
        int total = 0;
        for(String x : array){
            total += x.length();
            total += 1;
        }
        total -=1;
        return total;
    }
}
