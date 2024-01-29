#include <iostream>
#include <string>
#include <vector>
#include <cmath>
void motion(){
double Vi , Vf , a , t , x1 , x2 , Dx , velocity , acceleration , displacement , finalvelocity , fv;

int input;
std::cin >> input;
    switch(input){
      case 1:
      std::cout << "You choose: a = Vf - Vi / t\n";
      std::cout << "Enter value for Vf:\n";
      std::cin >> Vf;
      std::cout << "Your finial velocity is: " << Vf << "m/s\n" ;
      std::cout << "Enter value for Vi:\n";
      std::cin >> Vi;
      std::cout << "Your velocity is: " << Vi << "m/s\n" ;
      std::cout << "Enter value for time:\n";
      std::cin >> t;
      std::cout << "Enter value for a:\n";
      std::cin >> a;
      std::cout << "Your acceleratrion is : " << a << "m/s\n" ;
      if( t == 0 ){
        std::cout << "Oh you wanna finde the time \n" ;
        std::cout << " t = Vf-Vi / a \n";
        t = (Vf-Vi)/a ;
        std::cout << "Your time is: " << t << "s\n" ;
     } else if( Vf == 0) {
        std::cout << "Oh you wanna finde the final velocity \n";
        std::cout << "Vf = Vi + at\n" ;
        Vf = Vi + (a*t) ;
        std::cout << "Your final volicity is " << Vf << "m/s\n";
     } else if( Vi == 0){
      std::cout << "Oh you wanna finde the initial velocity \n";
      std::cout << "Vi = Vf - at\n" ;
      Vi = Vf - (a*t) ;
      std::cout << "Your initial volicity is " << Vi << "m/s\n";
     } else if( a == 0) {
      std::cout << "Oh you wanna finde the acceleration \n";
      std::cout << "a = Vf - Vi / t\n";
      a = (Vf - Vi)/t ;
      std::cout << "Your acceleration is " << a << "m/s\n";
     }
     else{
      std::cout << "Invaild input\n" ;
     }
      break;
      case 2:
      std::cout << "You choose: Vf = Vi + at\n";
      std::cout << "Enter value for a:\n";
      std::cin >> a;
      std::cout << "Your acceleratrion is : " << a << "m/s\n" ;
      std::cout << "Enter value for Vi:\n";
      std::cin >> Vi;
      std::cout << "Your velocity is : " << Vi << "m/s\n" ;
      std::cout << "Enter value for time:\n";
      std::cin >> t;
      std::cout << "Your time is: " << t << "s\n" ;
      velocity = Vi + (a * t); // Calculate velocity
      std::cout << "Your final velocity is: " << velocity << "m/s\n";
      break;
      case 3:
      std::cout << "You choose Δx = Vi*t + at/2\n";
      std::cout << "Enter value for Vi:\n";
      std::cin >> Vi;
      std::cout << "Your velocity is: " << Vi << "m/s\n" ;
      std::cout << "Enter value for a:\n";
      std::cin >> a;
      std::cout << "Your acceleratrion is: " << a << "m/s\n" ;
      std::cout << "Enter value for time:\n";
      std::cin >> t;
      std::cout << "Your time is: " << t << "s\n" ;
      x1 = Vi * t;
      x2 = 0.5 * a * t * t;
      Dx = x1 + x2;
      std::cout << "Your displacement is: " << Dx << "m\n";
      break;
      case 4:
      std::cout << "You choose Vf = Vi + 2*a*Δx \n";
      std::cout << "Enter value for Vi:\n";
      std::cin >> Vi;
      std::cout << "Your velocity is: " << Vi << "m/s\n" ;\
      std::cout << "Enter value for a:\n";
      std::cin >> a;
      std::cout << "Your acceleratrion is: " << a << "m/s\n" ;
      std::cout << "Enter value for Δx: " ;
      std::cin >> Dx ;
      std::cout << "Your displacement is: " << Dx << "m\n" ;
      fv = (Vi*Vi)+(2*a*Dx) ;
      finalvelocity = fv*fv;
      std::cout << "Your final velocity is: " << finalvelocity << "m/s\n" ;
      break ;
      default:
      std::cout << "Invalid choice\n";
            // Add code to handle invalid choices here
      break;
    }
}
void presentation() {
    std::cout << "Choose your problem\n";
    std::cout << "1) a = Vf - Vi / t\n";
    std::cout << "2) Vf = Vi + at\n";
    std::cout << "3) Δx = Vi*t + at/2\n";
    std::cout << "4) Vf = Vi + 2*a*Δx \n";
    
}

int main() {
    
    char repeat;
    do {
        presentation(); 
        motion();
        std::cout << "Do you want to calculate another motion? (y/n): ";
        std::cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');
    return 0;
}