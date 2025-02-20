// structure of student
struct student {
	int n;
	float present;
	char money;
	float tdays;
	char name[20];
	int rno;
	char fees;
	float days;
	float attend;
};

// function declarations only
void add(struct student s[]);
void eligibleStudents(struct student s[]);
void execute(struct student s[]);
void printfunction(struct student s[]);
void deleteRecord(struct student s[]);
void server();
void client();

