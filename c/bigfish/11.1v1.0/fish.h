#define MAX_MOUNT 10
#define SIZE_UP 10
#define RATE 1
#define MAX_LEVEL 3
#define FRAME_RATE 10
#define MAX_FRAME 2
#define DIFF_Y 40
#define DIFF_LEV SIZE_UP*d.level
struct bit_style
{
	int frame[MAX_FRAME*2];
	int count;
	int at;
};


struct fish_data
{
	CPoint pos;
	int level;
	bool direction;
	int speed;
	int enable;
	bit_style style;
};

class fish
{
public:
	fish_data player;
	fish_data cpu[MAX_MOUNT];

	CPoint size[MAX_LEVEL];
	
	CPoint sc;
	bool enable;
public:
	void ToDraw(CDC *pDC);
	void Update_pos(CPoint x);
	void Update_direction(int x);
	void Initial();
	void ToRand();
	void ToCheck();

	int ToCheck1(CPoint p1,CPoint p2,bool dir1,bool dir2,int lev1,int lev2);

private:
	void Draw_cpu(CDC *pDC);
	void Draw_player(CDC *pDC);
	void todraw(CDC *pDC,fish_data d);
	void todrawback(CDC *pDC,int nID);
};