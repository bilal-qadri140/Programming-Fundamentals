class Vehicle {
    protected String brand = "HONDA";

    public void ab() {
        System.out.println("MY Vehical detail is ");
    }

    public static void main(String[] args) {
        Main myFastCar = new Main();
        myFastCar.ab();
        System.out.println(myFastCar.modelName);
        System.out.println(myFastCar.brand + " " + myFastCar.modelName);
    }
}

class Main extends Vehicle {
    protected String modelName = "City";

}