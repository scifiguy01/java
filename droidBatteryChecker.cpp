/* https://www.codecademy.com/courses/learn-java/projects/droid 
This program is a blank sleet on codecademy. They give guidlines on expectations of the program. The program is one that checks a droids current battery level, and outputing current levels. The program uses classes for functionality. */

// The class being created "Droid"
class Droid {
  int batteryLevel;
  
  //constructor
  public Droid() {
    batteryLevel = 100;
  }
  
  //member function to activate droid
  public void activate() {
    System.out.println("Activated. How can I help you?");
    batteryLevel = batteryLevel - 5;
    System.out.println("Battery level is: " + batteryLevel + " percent.");
  }
  //member function to charge battery
    public void chargeBattery(int hours) {
      System.out.println("Droid charging");
      batteryLevel = batteryLevel + hours;
      if( batteryLevel > 100 ) {
        batteryLevel = 100;
      }
      else {
        System.out.println("Battery level at " + batteryLevel);
      }
    }
  //member function to check current battery levels
    public int checkBatteryLevel() {
      System.out.println(batteryLevel);
      return batteryLevel;
    }
  //member function to subtract battery levels based on height of hovering.
    public void hover( int feet ) {
      if( feet > 2) {
        System.out.println("Error! I cannot hover above 2 feet.");
      }
      else {
        System.out.println("Hovering... ");
        batteryLevel = batteryLevel - 20;
        System.out.println(batteryLevel);
      }
    }
    public static void main( String[] args ) {
      Droid myDroid = new Droid();
      myDroid.activate();
      myDroid.chargeBattery(5);
      myDroid.hover(10);
    }
}