import java.util.Scanner;

public class Shirt {
    public static String color;
    public static int size;

    Shirt(String color, int size) {
        this.color = color;
        this.size = size;

    }

    public void setcolor(String newcolor) {
        color = newcolor;
    }

    public void setsize(int newsize) {
        size = newsize;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter Name Of Obj");
        String objName = s.nextLine();
        Shirt myobj = new Shirt("White", 45);
        System.out.println("The Color of shirt is " + color);

        System.out.println("The Size of shirt is " + size + "inchshirt");
    }

}