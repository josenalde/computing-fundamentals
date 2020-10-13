#include <iostream>
#include <thread>
#include <chrono> //std::chrono::seconds
using namespace std;

static bool s_Finished = false;

void doWork() { //função a ser executada pela thread
    	std::cout << "Iniciou tread id: " << std::this_thread::get_id() << std::endl;
		while (!s_Finished) {
        std::cout << "Working...\n";
        // std::this_thread - m�todos para  thread atual
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

int main() {
    std::thread worker(doWork); // ponteiro para função é parâmetro do nome da thread
    std::cin.get(); // aguarda simultaneamente
    s_Finished = true;
    cout << "Finalizei thread worker...retornando para principal..." << endl;
    cout << "Thread principal id: " << std::this_thread::get_id() << endl;
    worker.join(); //informa que a thread principal aguarde a thread worker finalizar seu trabalho para
                  //poder continuar
    std::cin.get(); // não executa esta linha enquanto worker não termina
               // aguarda um ENTER
}

