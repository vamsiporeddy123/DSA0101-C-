import java.util.Scanner;

class BookFair {
    String Bname;
    double price;

    void Input() {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter book name: ");
        Bname = sc.nextLine();

        System.out.print("Enter price: ");
        price = sc.nextDouble();
    }

    void calculate() {
        if (price <= 1000)
            price = price - (price * 2 / 100);
        else if (price <= 3000)
            price = price - (price * 10 / 100);
        else
            price = price - (price * 15 / 100);
    }

    void display() {
        System.out.println("Book Name: " + Bname);
        System.out.println("Price after discount: " + price);
    }

    public static void main(String args[]) {
        BookFair obj = new BookFair();
        obj.Input();
        obj.calculate();
        obj.display();
    }
}
