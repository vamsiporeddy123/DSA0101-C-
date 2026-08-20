import java.util.Scanner;

class movieMagic {
    int year;
    String title;
    float rating;

    void accept() {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter year: ");
        year = sc.nextInt();

        sc.nextLine();
        System.out.print("Enter movie title: ");
        title = sc.nextLine();

        System.out.print("Enter rating: ");
        rating = sc.nextFloat();
    }

    void display() {
        System.out.println("Movie Title: " + title);

        if (rating >= 0.0 && rating <= 2.0)
            System.out.println("Flop");
        else if (rating <= 3.4)
            System.out.println("Semi-hit");
        else if (rating <= 4.5)
            System.out.println("Hit");
        else if (rating <= 5.0)
            System.out.println("Super Hit");
        else
            System.out.println("Invalid Rating");
    }

    public static void main(String args[]) {
        movieMagic obj = new movieMagic();
        obj.accept();
        obj.display();
    }
}
