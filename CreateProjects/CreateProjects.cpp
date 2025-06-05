#include <iostream>
#include <Windows.h>
#include "BackendLanguagesLIBS.hpp"

void createWindowCommand(std::string commandProject);

void createWindowCommand(std::string commandProject) {

	ShellExecuteA(nullptr, "open", commandProject.c_str(), nullptr, nullptr, SW_SHOWDEFAULT);
}

struct PickedCommand {

	std::string commandRoute;
};

struct CommittedRouteProd {
	
	std::string commitedProd;
};

struct UsersQuestions {

	std::string questions;
};

struct PickedNodeCommand {

	std::string commandProject;
};

void createGITPushedCommand(std::string commandGit) {

	createWindowCommand(commandGit.c_str());
}

static void printMessageScreen(int index, std::string commandPrinted) {

	std::cout << index << commandPrinted << std::endl;

}

struct InitalProd {
	
	std::string prod;
};

struct InitProject {
	
	std::string projectCreate;
};

struct CommittedMessage {
	
	std::string message;
};

struct TypeProd {

	std::string typeProject;
};

struct ProjectName {
	
	std::string name;
};

struct cdProdRoute {
	
	std::string route;
};

struct NewBranchCommand {
	
	std::string newName;
};

int main() {

	PickedCommand route;
	PickedNodeCommand command;
	InitProject project;
	TypeProd type;
	InitalProd prod;
	ProjectName name;
	cdProdRoute prodRoute;
	UsersQuestions question;
	CommittedRouteProd committed;
	CommittedMessage message;
	NewBranchCommand branchName;


	createWindowCommand(route.commandRoute);

	if (route.commandRoute == "install") {
		
		printMessageScreen(1, "Please Enter Package to Install: ");

		std::cin >> command.commandProject;

		createWindowCommand("npm install -g " + command.commandProject);


	}

	if (route.commandRoute == "Project") {

		printMessageScreen(1, "npm or npx: ");
		
		std::cin >> project.projectCreate;

		if (project.projectCreate == "npm") {

			createWindowCommand("npm create " + command.commandProject);

		}

		else if (project.projectCreate == "npx") {

			createWindowCommand("npx create" + command.commandProject);

		}

		if (project.projectCreate == "Create") {

			for (int i = 0; i < 1; i++) {

				printMessageScreen(i, "VueJS");
				printMessageScreen(i, "ReactJS");
				printMessageScreen(i, "NextJS");

			}

			printMessageScreen(0, "Pick One");

			std::cin >> prod.prod;

	

			if (prod.prod == VUE) {

				printMessageScreen(1, "Name the Project: ");
				std::cin >> name.name;

				createWindowCommand("npx create vite" + name.name);


				printMessageScreen(1, "Want to Add to Github");

				std::cin >> prodRoute.route;

				if (prodRoute.route == "Yes") {


					printMessageScreen(1, "Want to Complete All: ");
					std::cin >> question.questions;

					if (question.questions == "Yes") {

						createWindowCommand("git add .");
					}

					printMessageScreen(1, "Want to Create a new Branch for Repo");

					std::cin >> branchName.newName;

					if (branchName.newName == "Yes") {

						std::cin >> branchName.newName;
						createWindowCommand("git checkout -b " + branchName.newName);
					}

				}

			}

			else if (prod.prod == REACT) {

				printMessageScreen(1, "Name the Project: ");

				std::cin >> name.name;

				createWindowCommand("npx nano-react-app  " + name.name);


				printMessageScreen(1, "Want to Add to Github");

				std::cin >> prodRoute.route;

				if (prodRoute.route == "Yes") {

					printMessageScreen(1, "Want to Complete All: ");
					std::cin >> question.questions;

					if (question.questions == "Yes") {

						createWindowCommand("git add .");
					}


					printMessageScreen(1, "Want to Commit to Repo");

					std::cin >> committed.commitedProd;

					if (committed.commitedProd == "Yes") {

						std::cin >> message.message;
						createWindowCommand("git commit -m " + message.message);
					}

				
					printMessageScreen(1, "Want to Create a new Branch for Repo");

					std::cin >> branchName.newName;

					if (branchName.newName == "Yes") {

						std::cin >> branchName.newName;
						createWindowCommand("git checkout -b " + branchName.newName);
					}


				}

			}

			else if (prod.prod == "Next") {

				

				printMessageScreen(1, "Name the Project: ");

				std::cin >> name.name;

				createWindowCommand("npx create-next-app  " + name.name);


				printMessageScreen(1, "Want to Add to Github");

				std::cin >> prodRoute.route;

				if (prodRoute.route == "Yes") {


					printMessageScreen(1, "Want to Complete All: ");
					std::cin >> question.questions;

					if (question.questions == "Yes") {

						createWindowCommand("git add .");
					}

					printMessageScreen(1, "Want to Create a new Branch for Repo");

					std::cin >> branchName.newName;

					if (branchName.newName == "Yes") {

						std::cin >> branchName.newName;
						createWindowCommand("git checkout -b " + branchName.newName);
					}


				}
				

			}

			

		}
		

	}


}