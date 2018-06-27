/* https://www.codecademy.com/courses/learn-java/projects/basic-calculator This program creates a basic calculator class. Only basic inputs are available including addition, subtraction, multipication, division and modulus*/
//calculator class
class Calculator {
  //constructor
  public Calculator( ) {
    
  }
  public int add( int a, int b ) {
    return a + b;
  }
  public int subtract(int a, int b) { 
    return a - b;
  }
  public int multiply(int a, int b) {
    return a * b;
  }
  public int divide ( int a, int b) {
    if( b == 0 ) {
      System.out.println("Error! Dividing by zero is not allowed.");
      return 0;
    }
    else {
      return a / b;
    }
  }
  public int modulo( int a, int b) { 
      if( b == 0 ) {      
    System.out.println("Error! Dividing by zero is not allowed.");
    return 0;
        
    }
    else
      return a % b;
  }
  public static void main(String[] args) {
    Calculator myCalculator = new Calculator();
    System.out.println(myCalculator.add(5,7));
    System.out.println(myCalculator.subtract(45,11));
  }
}