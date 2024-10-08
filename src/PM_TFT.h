// #############################################################
//
//      TTTTTTT   FFFFFFF   TTTTTTT 
//         T      F            T   
//         T      FFFF         T
//         T      F            T
//         T      F            T
//
// #############################################################
//
//  TFT Screen
//
//

//
//  Y-axis parameters for PAGE Frame
//

#define pgLineHeight  20        // line (row) y size in pixels
#define pgStart   10      // Y
#define pgLine1   (pgStart + (0 * pgLineHeight))
#define pgLine2   (pgStart + (1 * pgLineHeight))
#define pgLine3   (pgStart + (2 * pgLineHeight))
#define pgLine4   (pgStart + (3 * pgLineHeight))
#define pgLine5   (pgStart + (4 * pgLineHeight))
#define pgLine6   (pgStart + (5 * pgLineHeight))
#define pgLine7   (pgStart + (6 * pgLineHeight))
#define pgLine8   (pgStart + (7 * pgLineHeight))
#define pgLine9   (pgStart + (8 * pgLineHeight))
#define pgLine10  (pgStart + (9 * pgLineHeight))
#define pgLine11  (pgStart + (10 * pgLineHeight))
#define pgLine12  (pgStart + (11 * pgLineHeight))

//
//  POP-UP frame definitions
//
//
#define puFrameLeft 10    //20
#define puFrameWidth 200
#define puFrameCenter ((puFrameLeft+puFrameWidth)/2)
#define puFrameTop pgLine1
#define puFrameHeight pgLine12-pgLine1



//
//  Y-axis parameters for BUTTON Frame (bottom)
//
#define btFrameTop 267
#define btFrameBot 319

//
//  X-axis parameters, four equal size columns (buttons)
//        60 pixels per column
//
#define col_0_Start 0
#define col_1_Start 60
#define col_1_End   119
#define col_2_Start  120
#define col_3_Start  180
#define pgCenter 160

#define TIME_FRAME  0
#define PAGE_FRAME  1
#define BUTTON_FRAME  2


// #############################################################
//
//      TTTTTTT   OOOOO    U     U    CCCCC    H     H
//         T     O     O   U     U   C     C   H     H
//         T     O     O   U     U   C         HHHHHHH
//         T     O     O   U     U   C     C   H     H
//         T      ooooo     UUUUU     CCCCC    H     H
//
// #############################################################

//#define DEBUG_TOUCH
#ifdef DEBUG_TOUCH
#define TOUCH_PRINT(x) Serial.print(x)
#define TOUCH_PRINTLN(x) Serial.println(x)
#define TOUCH_PRINTF(x,y) Serial.printf(x,y)
#else
#define TOUCH_PRINT(x)
#define TOUCH_PRINTLN(x)
#define TOUCH_PRINTF(x,y)
#endif

struct touchTFT {
  bool touchedFlag = false;
  int x;
  int y;
  int frame;
  int column;
  int row;        // row is only valid if frame==PAGE_FRAME
  int button;
} touchData;



//
//          Buttons - Screen Layout
//
//  |------------|    |------------|    |------------|
//  | Button #1  |    | Button #2  |    | Button #3  |
//  |------------|    |------------|    |------------|
//
//  |------------|    |------------|    |------------|
//  | Button #4  |    | Button #5  |    | Button #6  |
//  |------------|    |------------|    |------------|
//
//  |------------|    |------------|    |------------|
//  | Button #7  |    | Button #8  |    | Button #9  |
//  |------------|    |------------|    |------------|
//
//  |------------|    |------------|    |------------|
//  | Button #10 |    | Button #11 |    | Button #12 |
//  |------------|    |------------|    |------------|
//
//
#define BUTTON1 1   // Row 1 (top row)
#define BUTTON2 2
#define BUTTON3 3
#define BUTTON4 4   // Row 2
#define BUTTON5 5
#define BUTTON6 6
#define BUTTON7 7   // Row 3
#define BUTTON8 8
#define BUTTON9 9
#define BUTTON10 10 // Row 4 (bottom row)
#define BUTTON11 11
#define BUTTON12 12

#define COL1XPOS  10      // Buttons 1, 4, 7, 10
#define COL2XPOS  115     // Buttons 2, 5, 8, 11
#define COL3XPOS  220     // Buttons 3, 6, 9, 12

#define ROW1YPOS  10      // Buttons 1, 2, 3
#define ROW2YPOS  68      // Buttons 4, 5, 6
#define ROW3YPOS  127     // Buttons 7, 8, 9
#define ROW4YPOS  185     // Buttons 10, 11, 12

short buttonXpos[14] = { 0, COL1XPOS, COL2XPOS, COL3XPOS, COL1XPOS, COL2XPOS, COL3XPOS, 
                            COL1XPOS, COL2XPOS, COL3XPOS, COL1XPOS, COL2XPOS, COL3XPOS, 0};
   
short buttonYpos[14] = { 0, ROW1YPOS, ROW1YPOS, ROW1YPOS, ROW2YPOS, ROW2YPOS, ROW2YPOS, 
                            ROW3YPOS, ROW3YPOS, ROW3YPOS, ROW4YPOS, ROW4YPOS, ROW4YPOS, 0};

 
