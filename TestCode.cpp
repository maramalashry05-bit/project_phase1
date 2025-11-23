#include "GUI\Input.h"
#include "GUI\Output.h"

//This is a test code to test the Input and Output classes .......

int main()
{
	int x,y;

	//Create Input and Output objects to test
	Output *pOut = new Output();;
	Input *pIn = pOut->CreateInput();

	//Starting the test
	pOut->PrintMsg("This demo is to test input and output classes, Click anywhere to start the test");
	pIn->GetPointClicked(x,y);	//Wait for any click


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 1:	Create The FULL Tool bar, the drawing area and the status bar	
	//			This has already been done through the constrcutor of class Output
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMsg("TEST1: Drawing Tool bar and Status bar, Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	
	///////////////////////////////////////////////////////////////////////////////////
	// TEST 2:	Drawing all the Components with all possible states: Normal, highlighted
	//			
	///////////////////////////////////////////////////////////////////////////////////
	
	pOut->PrintMsg("TEST2: Now we will show that Output class can draw any Component in any state, Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	GraphicsInfo GfxInfo;  //to be used with draw function of the class Ouput

	/// 2.1- AND2 Gate test
	pOut->PrintMsg("Drawing 2-input AND gate, Normal and Highlighted,  Click to continue");
	
	//Drawing Normal AND2 gate
	GfxInfo.x1 = 100;	GfxInfo.y1 = 100;
	pOut->DrawAND2(GfxInfo);

	//Drawing Highlighted AND2 gate
	GfxInfo.x1 = 100;	GfxInfo.y1 = 200;
	pOut->DrawAND2(GfxInfo, true);

	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawingArea();

	/// 2.2- NAND2 Gate test
	pOut->PrintMsg("Drawing 2-input NAND gate, Normal and Highlighted,  Click to continue");

	///TODO: Add code to draw 2-input NAND gate, Normal and Highlighted

	//Drawing Normal NAND2 gate
	GfxInfo.x1 = 100;	GfxInfo.y1 = 100;
	pOut->DrawAND2(GfxInfo);

	//Drawing Highlighted NAND2 gate
	GfxInfo.x1 = 100;	GfxInfo.y1 = 200;
	pOut->DrawNAND2(GfxInfo, true);

	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawingArea();

	/// 2.3- OR2 and NOR2 Gates test
	pOut->PrintMsg("Drawing 2-input OR and NOR gates, Normal and Highlighted,  Click to continue");
	
	///TODO: Add code to draw 2-input OR and NOR gates, Normal and Highlighted for each

	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawingArea();

	/// 2.4- XOR2 and XNOR2 Gates test
	pOut->PrintMsg("Drawing 2-input XOR and XNOR gates, Normal and Highlighted,  Click to continue");
	
	///TODO: Add code to draw 2-input XOR and XNOR gates, Normal and Highlighted for each

	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawingArea();

	/// 2.5- Buffer and Inverter Gates test
	pOut->PrintMsg("Drawing Buffer and Inverter Gates, Normal and Highlighted,  Click to continue");
	
	///TODO: Add code to draw Buffer and Inverter Gates, Normal and Highlighted for each

	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawingArea();


	/// 2.6- AND3, NOR3, and XOR3 Gates test
	pOut->PrintMsg("Drawing 3-input AND, NOR, XOR Gates, Normal and Highlighted,  Click to continue");
	
	///TODO: Add code to draw 3-input AND, NOR, and XOR Gates, Normal and Highlighted for each
	pOut->PrintMsg("Drawing 3-input AND gate, Normal and Highlighted,  Click to continue");

	

	//Drawing Normal AND3 gate
	GfxInfo.x1 = 100;	GfxInfo.y1 = 100;
	pOut->DrawAND3(GfxInfo);

	//Drawing Highlighted AND3 gate
	GfxInfo.x1 = 100;	GfxInfo.y1 = 200;
	pOut->DrawAND3(GfxInfo, true);


	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawingArea();

	/// 2.7- Switch and LED test
	pOut->PrintMsg("Drawing Switch and LED, Normal and Highlighted,  Click to continue");

	
	///TODO: Add code to draw Switch and LED, Normal and Highlighted for each

	pOut->PrintMsg("Drawing Switch, Normal and Highlighted,  Click to continue");

	

	//Drawing Normal Switch
	GfxInfo.x1 = 100;	GfxInfo.y1 = 100;
	pOut->DrawSwitch(GfxInfo);

	//Drawing Highlighted Switch
	GfxInfo.x1 = 100;	GfxInfo.y1 = 200;
	pOut->DrawSwitch(GfxInfo, true);

	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawingArea();


	/// 2.8- Connections
	pOut->PrintMsg("Drawing connections, Normal, Highlighted, straight, and broken,  Click to continue");
	
	///TODO: Add code to draw connections, Normal, Highlighted, straight, and broken (all combinations) 

	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawingArea();



	


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 3: Read strings from the user
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMsg("TEST3: Now Time to test class Input, Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	
	pOut->PrintMsg("Testing Input ability to read strings");

	// Ask the user to type a string
	pOut->PrintMsg("Please type a string and press ENTER:");

	// Call GetSrting to read the string from user
	string userInput = pIn->GetSrting(pOut);

	// Clear the status bar
	pOut->PrintMsg("");

	// Print the typed string in the drawing area at coordinates (100,100)
	pOut->PrintMsg("You typed: " + userInput);


	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawingArea();

	///////////////////////////////////////////////////////////////////////////////////
	// TEST 4: Check for the user action
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMsg("TEST4: Testing Input ability to detect User Action, click anywhere");

	///////////////////////////////////////////////////////////////////////////////////
// TEST 4: Check for the user action
///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMsg("TEST4: Testing Input ability to detect User Action, click anywhere");
	pIn->GetPointClicked(x, y);

	ActionType ActType;

	///TODO:  You must add a case for each action
	//Add cases for the missing actions below
	do
	{
		ActType = pIn->GetUserAction();

		switch (ActType)
		{
			// GATES
		case ADD_Buff:
			pOut->PrintMsg("Action: add Buffer gate, Click anywhere");
			break;

		case ADD_INV:
			pOut->PrintMsg("Action: add Inverter gate, Click anywhere");
			break;

		case ADD_AND_GATE_2:
			pOut->PrintMsg("Action: add 2-input AND gate, Click anywhere");
			break;

		case ADD_AND_GATE_3:
			pOut->PrintMsg("Action: add 3-input AND gate, Click anywhere");
			break;

		case ADD_NAND_GATE_2:
			pOut->PrintMsg("Action: add 2-input NAND gate, Click anywhere");
			break;

		case ADD_NOR_GATE_2:
			pOut->PrintMsg("Action: add 2-input NOR gate, Click anywhere");
			break;

		case ADD_NOR_GATE_3:
			pOut->PrintMsg("Action: add 3-input NOR gate, Click anywhere");
			break;

		case ADD_OR_GATE_2:
			pOut->PrintMsg("Action: add 2-input OR gate, Click anywhere");
			break;

		case ADD_XOR_GATE_2:
			pOut->PrintMsg("Action: add 2-input XOR gate, Click anywhere");
			break;

		case ADD_XOR_GATE_3:
			pOut->PrintMsg("Action: add 3-input XOR gate, Click anywhere");
			break;

		case ADD_XNOR_GATE_2:
			pOut->PrintMsg("Action: add 2-input XNOR gate, Click anywhere");
			break;

			// COMPONENTS
		case ADD_Switch:
			pOut->PrintMsg("Action: add Switch, Click anywhere");
			break;

		case ADD_LED:
			pOut->PrintMsg("Action: add LED, Click anywhere");
			break;

		case ADD_CONNECTION:
			pOut->PrintMsg("Action: add Connection / Wire, Click anywhere");
			break;


			// LABELS
		case ADD_Label:
			pOut->PrintMsg("Action: add Label, Click anywhere");
			break;

		case EDIT_Label:
			pOut->PrintMsg("Action: edit Label, Click anywhere");
			break;


			// FILE OPERATIONS 
		case SAVE:
			pOut->PrintMsg("Action: save Circuit, Click anywhere");
			break;

		case LOAD:
			pOut->PrintMsg("Action: load Circuit, Click anywhere");
			break;


			// COPY / CUT / PASTE
			pOut->PrintMsg("Action: Copy Component, Click anywhere");
			break;

		case CUT:
			pOut->PrintMsg("Action: Cut Component, Click anywhere");
			break;

		case PASTE:
			pOut->PrintMsg("Action: Paste Component, Click anywhere");
			break;


			// EDITING 
		case SELECT:
			pOut->PrintMsg("Action: Select Component, Click anywhere");
			break;

		case MOVE:
			pOut->PrintMsg("Action: Move Component, Click anywhere");
			break;

		case DEL:
			pOut->PrintMsg("Action: Delete Component, Click anywhere");
			break;


			// UNDO/REDO
		case UNDO:
			pOut->PrintMsg("Action: Undo Last Action, Click anywhere");
			break;

		case REDO:
			pOut->PrintMsg("Action: Redo Last Action, Click anywhere");
			break;


			// SIMULATION FEATURES 
		case Create_TruthTable:
			pOut->PrintMsg("Action: Create Truth Table, Click anywhere");
			break;

		case Change_Switch:
			pOut->PrintMsg("Action: Change Switch State, Click anywhere");
			break;

		case Check_Validation:
			pOut->PrintMsg("Action: Check Circuit Validation, Click anywhere");
			break;

		case Inspect_Value:
			pOut->PrintMsg("Action: Inspect Value of a Pin, Click anywhere");
			break;


			// MODE SWITCHING 
		case SIM_MODE:
			pOut->PrintMsg("Action: Switch to Simulation Mode");
			pOut->CreateSimulationToolBar();
			break;

		case DSN_MODE:
			pOut->PrintMsg("Action: Switch to Design Mode");
			pOut->CreateDesignToolBar();
			break;


			// UI REGIONS
		case STATUS_BAR:
			pOut->PrintMsg("Action: Clicked on Status Bar, Click anywhere");
			break;

		case DSN_TOOL:
			pOut->PrintMsg("Action: Clicked empty area in Toolbar, Click anywhere");
			break;


			// EXIT
		case EXIT:
			break;

		default:
			pOut->PrintMsg("Action: Unknown action!");
			break;
		}

		pIn->GetPointClicked(x, y);   // Wait after every message

	} while (ActType != EXIT);


	/// Exiting
	pOut->PrintMsg("Action: EXIT, test is finished, click anywhere to exit");
	pIn->GetPointClicked(x,y);

	
	delete pIn;
	delete pOut;	
	return 0;
}


