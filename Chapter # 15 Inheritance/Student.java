1:
Public class Student{      
 
	 String name;
	 Int rollno;
	 Int age;
	 
	Void info(){
	  System.out.println(“Name: “+name);
	  System.out.println(“Roll Number: “+rollno);
	  System.out.println(“Age: “+age);
	}  
	
	
	Public static void main(String[] args) {
		Student student = new Student();
		
		// Accessing and property value
		Student.name = “Ramesh”;
		Student.rollno = 253;
		Student.age = 25;
		
		// Calling method
		Student.info();
		
	}
}

2:
//declaring a class
Public class Person
{ //class body starts here
  //creating the data members of the class
  Static String name = “John”;
  Static int age = 25;
  //creating the methods of the class
  Void eat()
  {
    //methodBody
  }
  Void study()
  {
    //methodBody
  }
  Void play()
  {
    //methodBody
  }
  Public static void main(String args[])
  {
    System.out.println(“Name of the person: “ +name);
    System.out.println(“Age of the person: “ +age);
  }
} class body ends here

3:

Class Student{  
 Int id;  
 String name;  
}  
Class TestStudent3{  
 Public static void main(String args[]){  
  //Creating objects  
  Student s1=new Student();  
  Student s2=new Student();  
  //Initializing objects  
  S1.id=101;  
  S1.name=”Sonoo”;  
  S2.id=102;  
  S2.name=”Amit”;  
  //Printing data  
  System.out.println(s1.id+” “+s1.name);  
  System.out.println(s2.id+” “+s2.name);  
 }  
}

4:

Class Employee{  
    Int id;  
    String name;  
    Float salary;  
    Void insert(int I, String n, float s) {  
        Id=I;  
        Name=n;  
        Salary=s;  
    }  
    Void display(){System.out.println(id+” “+name+” “+salary);}  
}  
Public class TestEmployee {  
Public static void main(String[] args) {  
    Employee e1=new Employee();  
    Employee e2=new Employee();  
    Employee e3=new Employee();  
    E1.insert(101,”ajeet”,45000);  
    E2.insert(102,”irfan”,25000);  
    E3.insert(103,”nakul”,55000);  
    E1.display();  
    E2.display();  
    E3.display();  
}  
}

5:

Java Program to illustrate the use of Rectangle class which  
//has length and width data members  
Class Rectangle{  
 Int length;  
 Int width;  
 Void insert(int l,int w){  
  Length=l;  
  Width=w;  
 }  
 Void calculateArea(){System.out.println(length*width);}  
}  
Class TestRectangle2{  
 Public static void main(String args[]){  
  Rectangle r1=new Rectangle(),r2=new Rectangle();//creating two objects  
  R1.insert(11,5);  
  R2.insert(3,15);  
  R1.calculateArea();  
  R2.calculateArea();  
}  
}
6:

//Let us see another example of default constructor  
//which displays the default values  
Class Student3{  
Int id;  
String name;  
//method to display the value of id and name  
Void display(){System.out.println(id+” “+name);}  
  
Public static void main(String args[]){  
//creating objects  
Student3 s1=new Student3();  
Student3 s2=new Student3();  
//displaying values of the object  
S1.display();  
S2.display();  
}  
}
7:

Class Animal {}

Class Dog extends Animal {}
Class Cat extends Animal {}

Public class Test
{
    // using Dog object
    Animal obj = new Dog();

    // using Cat object
    Obj = new Cat();
}
8:
// Class Declaration
 
Public class Dog
{
    // Instance Variables
    String name;
    String breed;
    Int age;
    String color;
 
    // Constructor Declaration of Class
    Public Dog(String name, String breed,
                   Int age, String color)
    {
        This.name = name;
        This.breed = breed;
        This.age = age;
        This.color = color;
    }
 
    // method 1
    Public String getName()
    {
        Return name;
    }
 
    // method 2
    Public String getBreed()
    {
        Return breed;
    }
 
    // method 3
    Public int getAge()
    {
        Return age;
    }
 
    // method 4
    Public String getColor()
    {
        Return color;
    }
 
    @Override
    Public String toString()
    {
        Return(“Hi my name is “+ this.getName()+
               “.\nMy breed,age and color are “ +
               This.getBreed()+”,” + this.getAge()+
               “,”+ this.getColor());
    }
 
    Public static void main(String[] args)
    {
        Dog tuffy = new Dog(“tuffy”,”papillon”, 5, “white”);
        System.out.println(tuffy.toString());
    }
}
9:

Class Student.
{
 String name;
 Int rollno;
 Int age;
Void info(){
 // some code
}
}
10:

Class MethodDemo2{ 
    Static int[] total(int a, int b) 
    { 
Int[] s = new int[2]; 
S[0] = a + b; 
S[1] = a – b; 
        Return s; 
    } 

    Public static void main(String[] args) 
    { 
Int[] s = total(200, 70); 
System.out.println(“Addition = “ + s[0]); 
System.out.println(“Subtraction = “ + s[1]); 
    } 
}

11:

Class Demo{
Int a; 
    Double b; 
Int c; 
Demo(int m, double d, int a) 
    { 
        A = m; 
        B = d; 
        C = a; 
    } 
} 
Class MethodDemo4{ 
    Static Demo get(int x, int y) 
    { 
        Return new Demo(x * y, (double)x / y, (x + y)); 
    } 
    Public static void main(String[] args) 
    { 
        Demo ans = get(25, 5); 
System.out.println(“Multiplication = “ + ans.a); 
System.out.println(“Division = “ + ans.b); 
System.out.println(“Addition = “ + ans.c); 
    } 
}
12:

Class Car
{
 String name ;
 String model;
 Car( )    //Constructor
 {
  Name =””;
  Model=””;
 }
}
13:
Class Cricketer
{
 String name;
 String team;
 Int age;
 Cricketer ()   //default constructor.
 {
  Name =””;
  Team =””;
  Age = 0;
 }
 Cricketer(String n, String t, int a)   //constructor overloaded
 {
  Name = n;
  Team = t;
  Age = a;
 }
 Cricketer (Cricketer ckt)     //constructor similar to copy constructor of c++ 
 {
  Name = ckt.name;
  Team = ckt.team;
  Age = ckt.age;
 }
 Public String toString()
 {
  Return “this is “ + name + “ of “+team;
 }
}

Class test:
{
 Public static void main (String[] args)
 {
  Cricketer c1 = new Cricketer();
  Cricketer c2 = new Cricketer(“sachin”, “India”, 32);
  Cricketer c3 = new Cricketer(c2 );
  System.out.println(c2);
  System.out.println(c3);
  C1.name = “Virat”;
  C1.team= “India”;
  C1.age = 32;
  System .out. print in (c1);
 }
}
14:

Class Test
{
 Test()
 {
  This(10);
 }
 Test(int x)
 {
  System.out.println(“x=”+x);
 }
Public static void main(String arg[])
{
Test object = new Test();
}
}
15:

Class abc
{
  Public abc()
  {
    This(5);
    System.out.println(“Default Constructor”);
  }
  Public abc(int x)
  {
    This(5, 6);
    System.out.println(“Constructor with one Parameter”);
    System.out.println(“Value of x  “+x);
  }
  Public abc(int x, int y)
  {
    System.out.println(“Constructor with two Parameter”);
    System.out.println(“Value of x and y  “+x+” “+y);
  }
}
Class ChainingDemo1
{
  Public static void main(String as[])
  {
    Abcobj = new abc();
  }
}
16:

Class Parent
{
    Public void p1()
    {
        System.out.println(“Parent method”);
    }
}
Public class Child extends Parent {

    Public void c1()
    {
        System.out.println(“Child method”);
    }
    Public static void main(String[] args)
    {
        Child cobj = new Child();
        Cobj.c1();  //method of Child class
        Cobj.p1();  //method of Parent class
    }
}
17:

Class Vehicle
{
    // variable defined
    String vehicleType;
}
Public class Car extends Vehicle {

    String modelType;
    Public void showDetail()
    {
        vehicleType = “Car”;    //accessing Vehicle class member variable
        modelType = “Sports”;
        System.out.println(modelType + “ “ + vehicleType);
    }
    Public static void main(String[] args)
    {
        Car car = new Car();
        Car.showDetail();
    }
}
18:

Class Address{
Int street_no;
String city;
String state;
Int pin;
Address(int street_no, String city, String state, int pin ){
This.street_no = street_no;
This.city = city;
This.state = state;
This.pin = pin;
}
}

Class Student
{
  String name;
  Address ad;
}
19:

Class Author
{
  String authorName;
  Int age;
  String place;

  // Author class constructor
  Author(String name, int age, String place)
  {
    This.authorName = name;
    This.age = age;
    This.place = place;
  }
}

Class  Book
{
  String name;
  Int price;
  // author details
  Author auther;
  Book(String n, int p, Author auther)
  {
    This.name = n;
    This.price = p;
    This.auther = auther;
  }
  Public static void main(String[] args) {
    Author auther = new Author(“John”, 42, “USA”);
    Book b = new Book(“Java for Begginer”, 800, auther);
    System.out.println(“Book Name: “+b.name);
    System.out.println(“Book Price: “+b.price);
    System.out.println(“------------Auther Details----------“);
    System.out.println(“Auther Name: “+b.auther.authorName);
    System.out.println(“Auther Age: “+b.auther.age);
    System.out.println(“Auther place: “+b.auther.place);
  }
20:

Class Publisher{
  
  String name;
  String publisherID;
  String city;
  
  Publisher(String name, String publisherID, String city) {
    This.name = name;
    This.publisherID = publisherID;
    This.city = city;
  }
}


Class Author
{
  String authorName;
  Int age;
  String place;

  // Author class constructor
  Author(String name, int age, String place)
  {
    This.authorName = name;
    This.age = age;
    This.place = place;
  }
}

Class Book
{
  String name;
  Int price;
  // author details
  Author auther;
  Publisher publisher;
  Book(String n, int p, Author auther, Publisher publisher )
  {
    This.name = n;
    This.price = p;
    This.auther = auther;
    This.publisher = publisher;
  }
  Public static void main(String[] args) {
    Author auther = new Author(“John”, 42, “USA”);
    Publisher publisher = new Publisher(“Sun Publication”,”JDSR-III4”, “LA”);
    Book b = new Book(“Java for Begginer”, 800, auther, publisher);
    System.out.println(“Book Name: “+b.name);
    System.out.println(“Book Price: “+b.price);
    System.out.println(“------------Author Details----------“);
    System.out.println(“Auther Name: “+b.auther.authorName);
    System.out.println(“Auther Age: “+b.auther.age);
    System.out.println(“Auther place: “+b.auther.place);
    System.out.println(“------------Publisher Details-------“);
    System.out.println(“Publisher Name: “+b.publisher.name);
    System.out.println(“Publisher ID: “+b.publisher.publisherID);
    System.out.println(“Publisher City: “+b.publisher.city);
  }
  
}
21:
Class Calculate
{
  Void sum (int a, int b)
  {
    System.out.println(“sum is”+(a+b)) ;
  }
  Void sum (float a, float b)
  {
    System.out.println(“sum is”+(a+b));
  }
  Public static void main (String[] args)
  {
    Calculate  cal = new Calculate();
    Cal.sum (8,5);      //sum(int a, int b) is method is called.
    Cal.sum (4.6f, 3.8f); //sum(float a, float b) is called.
  }
22:

Class Game
{
 	Public void type()
 	{  
 		System.out.println(“Indoor & outdoor”); 
 	}
}

Class Cricket extends Game
{
 	Public void type()
 	{  
 		System.out.println(“outdoor game”); 
	}

 	Public static void main(String[] args)
 	{
   		Game gm = new Game();
   		Cricket ck = new Cricket();
   		Gm.type();
   		Ck.type();
   		Gm = ck;	//gm refers to Cricket object
   		Gm.type();	//calls Cricket’s version of type
 	}
}
23:

Class Employee
{
    Int eid;
    String name;
    Static String company = “Studytonight”;

    Public void show()
    {
        System.out.println(eid + “-“ + name + “-“ + company);
    }

    Public static void main( String[] args )
    {
        Employee se1 = new Employee();
        Se1.eid = 104;
        Se1.name = “Abhijit”;
        Se1.show();

        Employee se2 = new Employee();
        Se2.eid = 108;
        Se2.name = “ankit”;
        Se2.show();
    }

}

