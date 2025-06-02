#include <iostream>
#include <string>

int main() {
	// Variables del juego
	std::string posicion;
	std::string jug1X = "X"; std::string jug2O = "O";
	int turno = 0;
	std::string board[3][3] = {
		{"#", "#", "#"},
		{"#", "#", "#"},
		{"#", "#", "#"}
	};

	// Mensaje de bienvenida
	std::cout << "Bienvenido al juego de Tres en Rayas!" << std::endl;
	std::cout << "" << std::endl;

	std::cout << "Jugador 1: X" << std::endl;
	std::cout << "Jugador 2: O" << std::endl;
	std::cout << "Epacios libres # del tablero: " << std::endl;

	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "instrucciones: " << std::endl;
	std::cout << "	- Jugador 1 y Jugador 2 deben elegir un espacio del tablero para colocar su ficha." << std::endl;
	std::cout << "	- El primer jugador en alinear tres fichas en horizontal, vertical o diagonal gana." << std::endl;
	std::cout << "" << std::endl;

	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "El tablero se representa de la siguiente manera:" << std::endl;
	std::cout << "	1 | 2 | 3" << std::endl;
	std::cout << "	--------- " << std::endl;
	std::cout << "A	" << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << std::endl;
	std::cout << "B	" << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << std::endl;
	std::cout << "C	" << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;

	// Ciclo del juego
	while (turno <= 8) {
		// Mostrar el tablero
		std::cout << "A jugar! ----------------------->" << std::endl;
		std::cout << "	1 | 2 | 3" << std::endl;
		std::cout << "	--------- " << std::endl;
		std::cout << "A	" << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << std::endl;
		std::cout << "B	" << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << std::endl;
		std::cout << "C	" << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << std::endl;

		//Jugador 1
		if (turno == 0 || turno == 2 || turno == 4 || turno == 6 || turno == 8) {
			std::cout << "Turno jugador 1" << std::endl;
			std::cout << "Elige una posicion en tablero: ";
			std::cin >> posicion;

			if (posicion == "A1") {
				if (board[0][0] == "#") {
					board[0][0] = jug1X;
				}
				else {
					std::cout << "Posicion ocupada, elige otra." << std::endl;
					turno--;
				}

			}
			else if (posicion == "A2") {
				if (board[0][1] == "#") {
					board[0][1] = jug1X;
				}
				else {
					std::cout << "Posicion ocupada, elige otra." << std::endl;
					turno--;
				}
			}
			else if (posicion == "A3") {
				if (board[0][2] == "#") {
					board[0][2] = jug1X;
				}
				else {
					std::cout << "Posicion ocupada, elige otra." << std::endl;
					turno--;
				}
			}
			else if (posicion == "B1") {
				if (board[1][0] == "#") {
					board[1][0] = jug1X;
				}
				else {
					std::cout << "Posicion ocupada, elige otra." << std::endl;
					turno--;
				}
			}
			else if (posicion == "B2") {
				if (board[1][1] == "#") {
					board[1][1] = jug1X;
				}
				else {
					std::cout << "Posicion ocupada, elige otra." << std::endl;
					turno--;
				}
			}
			else if (posicion == "B3") {
				if (board[1][2] == "#") {
					board[1][2] = jug1X;
				}
				else {
					std::cout << "Posicion ocupada, elige otra." << std::endl;
					turno--;
				}
			}
			else if (posicion == "C1") {
				if (board[2][0] == "#") {
					board[2][0] = jug1X;
				}
				else {
					std::cout << "Posicion ocupada, elige otra." << std::endl;
					turno--;
				}
			}
			else if (posicion == "C2") {
				if (board[2][1] == "#") {
					board[2][1] = jug1X;
				}
				else {
					std::cout << "Posicion ocupada, elige otra." << std::endl;
					turno--;
				}
			}
			else if (posicion == "C3") {
				if (board[2][2] == "#") {
					board[2][2] = jug1X;
				}
				else {
					std::cout << "Posicion ocupada, elige otra." << std::endl;
					turno--;
				}
			}
			else {
				std::cout << "No es un lugar de tablero" << std::endl;
				turno--;
			};
		}
		//Jugador 2
		else {
			std::cout << "Turno jugador 2" << std::endl;
			std::cout << "Elige una posicion en tablero: ";
			std::cin >> posicion;

			if (posicion == "A1") {
				if (board[0][0] == "#") {
					board[0][0] = jug2O;
				}
				else {
					std::cout << "Posicion ocupada, elige otra." << std::endl;
					turno--;
				}

			}
			else if (posicion == "A2") {
				if (board[0][1] == "#") {
					board[0][1] = jug2O;
				}
				else {
					std::cout << "Posicion ocupada, elige otra." << std::endl;
					turno--;
				}
			}
			else if (posicion == "A3") {
				if (board[0][2] == "#") {
					board[0][2] = jug2O;
				}
				else {
					std::cout << "Posicion ocupada, elige otra." << std::endl;
					turno--;
				}
			}
			else if (posicion == "B1") {
				if (board[1][0] == "#") {
					board[1][0] = jug2O;
				}
				else {
					std::cout << "Posicion ocupada, elige otra." << std::endl;
					turno--;
				}
			}
			else if (posicion == "B2") {
				if (board[1][1] == "#") {
					board[1][1] = jug2O;
				}
				else {
					std::cout << "Posicion ocupada, elige otra." << std::endl;
					turno--;
				}
			}
			else if (posicion == "B3") {
				if (board[1][2] == "#") {
					board[1][2] = jug2O;
				}
				else {
					std::cout << "Posicion ocupada, elige otra." << std::endl;
					turno--;
				}
			}
			else if (posicion == "C1") {
				if (board[2][0] == "#") {
					board[2][0] = jug2O;
				}
				else {
					std::cout << "Posicion ocupada, elige otra." << std::endl;
					turno--;
				}
			}
			else if (posicion == "C2") {
				if (board[2][1] == "#") {
					board[2][1] = jug2O;
				}
				else {
					std::cout << "Posicion ocupada, elige otra." << std::endl;
					turno--;
				}
			}
			else if (posicion == "C3") {
				if (board[2][2] == "#") {
					board[2][2] = jug2O;
				}
				else {
					std::cout << "Posicion ocupada, elige otra." << std::endl;
					turno--;
				}
			}
			else {
				std::cout << "No es un lugar de tablero" << std::endl;
				turno--;
			};
		}

		turno++;

	};


	//logica de victoria
	if ((board[0][0] == jug1X && board[0][1] == jug1X && board[0][2] == jug1X) || // Fila 1 Jugador 1
		(board[1][0] == jug1X && board[1][1] == jug1X && board[1][2] == jug1X) || // Fila 2 Jugador 1
		(board[2][0] == jug1X && board[2][1] == jug1X && board[2][2] == jug1X) || // Fila 3 Jugador 1
		(board[0][0] == jug1X && board[1][0] == jug1X && board[2][0] == jug1X) || // Columna 1 Jugador 1
		(board[0][1] == jug1X && board[1][1] == jug1X && board[2][1] == jug1X) || // Columna 2 Jugador 1
		(board[0][2] == jug1X && board[1][2] == jug1X && board[2][2] == jug1X) || // Columna 3 Jugador 1
		(board[0][0] == jug1X && board[1][1] == jug1X && board[2][2] == jug1X) || // Diagonal principal Jugador 1
		(board[0][2] == jug1X && board[1][1] == jug1X && board[2][0] == jug1X)) { // Diagonal secundaria Jugador 1
		std::cout << "" << std::endl;
		std::cout << "Jugador 1 ha ganado!" << std::endl;
	}
	else if ((board[0][0] == jug2O && board[0][1] == jug2O && board[0][2] == jug2O) || // Fila 1 Jugador 1
		(board[1][0] == jug2O && board[1][1] == jug2O && board[1][2] == jug2O) || // Fila 2 Jugador 1
		(board[2][0] == jug2O && board[2][1] == jug2O && board[2][2] == jug2O) || // Fila 3 Jugador 1
		(board[0][0] == jug2O && board[1][0] == jug2O && board[2][0] == jug2O) || // Columna 1 Jugador 1
		(board[0][1] == jug2O && board[1][1] == jug2O && board[2][1] == jug2O) || // Columna 2 Jugador 1
		(board[0][2] == jug2O && board[1][2] == jug2O && board[2][2] == jug2O) || // Columna 3 Jugador 1
		(board[0][0] == jug2O && board[1][1] == jug2O && board[2][2] == jug2O) || // Diagonal principal Jugador 1
		(board[0][2] == jug2O && board[1][1] == jug2O && board[2][0] == jug2O)) { // Diagonal secundaria Jugador 1
		std::cout << "" << std::endl;
		std::cout << "Jugador 2 ha ganado!" << std::endl;
	}else{
		std::cout << "" << std::endl;
		std::cout << "Jugador 1 y jugador 2 han empatado!" << std::endl;
	}

}