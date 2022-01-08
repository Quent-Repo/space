#include <iostream>

int main() {
  double weight = 0;
  int planet = 0;
  std::cout <<"Weight\n";
  std::cin >> weight;
  std::cout << "What planet do you want to fight on:";
  std::cin >> planet;
  std::cout << planet;

  //With switch
  /*
  switch(planet){
    case (1):
      std::cout << (weight * 0.38);
    break;
    case 2:
      std::cout << (weight * .91);
    break;
    case 3:
      std::cout << (weight *.38);
    break;
    case 4:
      std::cout << (weight *2.34);
    break;
    case 5:
      std::cout << (weight*1.06);
    break;
    case 6:
      std::cout << (weight*.92);
    break;
    case 7:
     std::cout << (weight*1.19);
    break;
    default:
    std::cout << "Unkown";
    break;
  }
  */

  //With IF ELSE
  /*
  if(planet = 1){
   std::cout << (weight * 0.38);}
   else if (planet = 2){
   std::cout << (weight * .91);}
   else if (planet = 3){
   std::cout << (weight * .38);}
   else if (planet = 4){
   std::cout << (weight * 2.34);}
   else if (planet = 5){
   std::cout << (weight * 1.06);}
   else if (planet = 6){
   std::cout << (weight * .92);}
   else{
     std::cout << (weight * 1.19);
   }
  */ 
}
