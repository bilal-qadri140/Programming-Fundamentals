class Teacher {
    String name;
    int age;

    public void setData(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public void show() {
        System.out.println("Name of teacher is "+name);
        System.out.println("Age of taesher is "+age);
    }
}

class student extends Teacher{
    public void setData(String name, int age){
        super.setData("pm", 22);
        super.name = name;
        super.age = age;
    }
    public void show() {
        super.show();
        System.out.println("Name of Student is "+name);
        System.out.println("Age of Student is "+age); 
    }
}

public class Test1 {
    public static void main(String[] args) {
        // C b = new C();
        // b.show();
        student s = new student();
        s.setData("Bilal Qadri", 21);
        s.show();
    }

}
