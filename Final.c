/*Created by Darius Yazdekhasti and Kevin Zhang
This flashes my name in morse code by inputing my name in the
code by finding my letters from something like a dictionary
so that it will take the commands from each letter and
flash the light on the board.
The site for the book is "https://raks.ee/books/pdf/exploringraspberrypi.pdf"
Page: 194-195
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define GPIO_NUMBER "4"
#define GPIO4_PATH "/sys/class/gpio/gpio4/"
#define GPIO_SYSFS "/sys/class/gpio/"
const int LED_PIN = 1;


void writeGPIO(char filename[], char value[]){
 FILE* fp; // create a file pointer fp
 fp = fopen(filename, "w+"); // open file for write/update
 fprintf(fp, "%s", value); // send the value to the file
 fclose(fp); // close the file using fp
 }
// the loop function runs over and over again forever
  char phrase[] = "This is what will be blinked on the light";
  int length = strlen(phrase);
  for (int num=0; num<length; num++){
    char ch = phrase[num];
    switch (ch)
    {
      case 'a':
        a();
        break;
      case 'b':
      {
        b();
        break;
      }
      case 'c':
      {
        c();
        break;
      }
      case 'd':
      {
        d();
        break;
      }
      case 'e':
      {
        e();
        break;
      }
      case 'f':
      {
        f();
        break;
      }
      case 'g':
      {
        g();
        break;
      }
      case 'h':
      {
        h();
        break;
      }
      case 'i':
      {
        i();
        break;
      }
      case 'j':
      {
        j();
        break;
      }
      case 'k':
      {
        k();
        break;
      }
      case 'l':
      {
        l();
        break;
      }
      case 'm':
      {
        m();
        break;
      }
      case 'n':
      {
        n();
        break;
      }
      case 'o':
      {
        o();
        break;
      }
      case 'p':
      {
        p();
        break;
      }
      case 'q':
      {
        q();
        break;
      }
      case 'r':
      {
        r();
        break;
      }
      case 's':
      {
        s();
        break;
      }
      case 't':
      {
        t();
        break;
      }
      case 'u':
      {
        u();
        break;
      }
      case 'v':
      {
        v();
        break;
      }
      case 'w':
      {
        w();
        break;
      }
      case 'x':
      {
        x();
        break;
      }
      case 'y':
      {
        y();
        break;
      }
      case 'z':
      {
        z();
        break;
      }
      default:
      space();
      break;
    }
  }
int a(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
int b(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
int c(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int d(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int e(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int f(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int g(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int h(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int i(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int j(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int k(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int l(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int m(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int n(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int o(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int p(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int q(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int r(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int s(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int t(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int u(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int v(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int w(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int x(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int y(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int z(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(450000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  int space(){
  usleep(1200000);
  }
