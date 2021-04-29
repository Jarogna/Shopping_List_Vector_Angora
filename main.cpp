// Program that creates a Vector for my shopping list. Sorting in descending order and outputting to the screen.
// Teacher: Dr. Tyson McMillian
// Student: Ronald Angora
// Date: 04/29/21

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() 
{
  // Initialising shoppingList Vector
  vector<string> shoppingList = { "Brisket", "Bread", "Apples", "Dog Food", "Laundry Detergent", "Broccoli", "Milk", "Eggs", "Water", "Orange Juice", "Cereal" };

  // Sort Vector in descending order
  sort(shoppingList.rbegin(), shoppingList.rend(), greater <>());

  /* Add items to Shopping List vector
  shoppingList.push_back("Brisket");
  shoppingList.push_back("Bread");
  shoppingList.push_back("Apples");
  shoppingList.push_back("Dog Food");
  shoppingList.push_back("Laundry Detergent");
  shoppingList.push_back("Broccoli");
  shoppingList.push_back("Milk");
  shoppingList.push_back("Eggs");
  shoppingList.push_back("Water");
  shoppingList.push_back("Orange Juice");
  shoppingList.push_back("Cereal");
  */
  
  // Appending **** to Favorite item in Shopping List
  

  // End as the Last item in List to signify end of the list
  shoppingList.push_back("END");
  
  // Output to screen
  for (const auto &i: shoppingList)
  cout << i << ' ' << endl;

  return 0;
}