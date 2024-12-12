#include <stdio.h>

void car() {
//week 4
//> 60, <= 75 200k
//> 75, <= 90 350k
//> 90, <= 110 500k
//> 110, <= 150 700k
//> 150, <= 200 1200k
//> 200 2000k
	printf("How much HP do you want? ");
	int hp = 0; scanf("%d", &hp);
	if (hp < 60) printf("ELiMiZDE YOK\n");
	else {
		int price;
		if (hp > 200) price = 2000000;
		else if (hp > 150) price = 1200000;
		else if (hp > 110) price = 700000;
		else if (hp > 90) price = 500000;
		else if (hp > 75) price = 350000;
		else if (hp > 59) price = 200000;
		printf("You have to pay %d\n", price);
	}
	return;
}

void rich() {
	int richness = 0; int in = 0;
	printf("How much $ do you have on your bank account?"); scanf("%d", &in);
	if (in > 10000) richness++;
	printf("How many house do you have in Kötekli (if any)?"); scanf("%d", &in);
	richness += in;
	printf("How many cars do you have (if any)?"); scanf("%d", &in);
	richness += in;

	if (!richness) printf("You are so poor and have to work 24/7 like a goddamn slave.\n");
	else if (richness == 1) printf("You are meh poor and have to work weekdays 9-5.\n");
	else if (richness == 2) printf("You are \"middle pole\" and have to work lightly maybe, or have some passive income already.\n");
	else if (richness == 3) printf("You are rich and you don't know what work is.\n");
	else if (richness >= 7) printf("Liar. Go back on your work.\n");
	else printf("You are so rich that you make people work instead.\n");
	
	return;
}

int main() {
	printf("Select an option:\n1 - Car HP (week 4)\n2 - Richness\n\n"); 
	int in = 0;
input:
	scanf("%d", &in);
	switch (in) {
		case 1: car(); return 0;
		case 2: rich(); return 0;
		default: goto input;
	}
}