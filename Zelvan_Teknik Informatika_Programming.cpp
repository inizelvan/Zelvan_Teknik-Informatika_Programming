// NAMA		: Zelvan Abdi Wijaya
// NRP      	: 5025221125
// Jurusan	: Teknik Informatika

#include <iostream>
#include <cmath>

#define GRAVITASI 10
#define START_PENGUKURAN 1
#define SUDUT 45
#define SIN90 1

float mencari_V0(float v1, float v2)
{
  	return (v1-v2);
}

int speed_dgn_loss(int loss)
{
    if ((loss >0) && (loss <= 10))
        {
            loss = 1;
        }
    else if ((loss >10) && (loss<= 20))
        {
            loss = 3;
        }
    else if ((loss > 20) && (loss <= 30))
        {
            loss = 5;
        }

    return loss;
}

int main() {
    int loss, jarak_input,vtan ;
    float v0, vtan1;
    std::cin >> vtan;
    loss = speed_dgn_loss(vtan);
    v0 = mencari_V0(vtan, loss);
    jarak_input = ((v0*v0)*SIN90)/GRAVITASI;
    vtan1  = sqrt(jarak_input * GRAVITASI) + loss / SIN90;
    std::cout << jarak_input << " " << vtan1 << std::endl;
    return 0;
}
