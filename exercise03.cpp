#include <iostream>

using namespace std;

int volume(struct Box box);

struct Box{
  int height;
  int width;
  int length;
};

// Do not change the main function
int main() 
{
    struct Box box1 , box2;
  
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> box1.height;
    cout << "Enter Box 1 Width : ";
    cin >> box1.width;
    cout << "Enter Box 1 Length : ";
    cin >> box1.length;
    
    cout << "Enter Box 2 Height : ";
    cin >> box2.height;
    cout << "Enter Box 2 Width : ";
    cin >> box2.width;
    cout << "Enter Box 2 Length : ";
    cin >> box2.length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(box1)+ volume( box2);
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

int volume(struct Box box)
{
  return box.height * box.width * box.length;
}
