import java.util.Scanner;

class ShowRoom {
    String name;
    long mobno;
    double cost;
    double dis;
    double amount;

    void input() {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter customer name: ");
        name = sc.nextLine();

        System.out.print("Enter mobile number: ");
        mobno = sc.nextLong();

        System.out.print("Enter cost: ");
        cost = sc.nextDouble();
    }

    void calculate() {
        if (cost <= 10000)
            dis = cost * 5 / 100;
        else if (cost <= 20000)
            dis = cost * 10 / 100;
        else if (cost <= 35000)
            dis = cost * 15 / 100;
        else
            dis = cost * 20 / 100;

        amount = cost - dis;
    }

    void display() {
        System.out.println("Customer Name: " + name);
        System.out.println("Mobile Number: " + mobno);
        System.out.println("Amount to be paid: " + amount);
    }

    public static void main(String args[]) {
        ShowRoom obj = new ShowRoom();
        obj.input();
        obj.calculate();
        obj.display();
    }
}
