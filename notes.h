#define	note_C0		16.35
#define	note_Db0	17.32
#define	note_D0		18.35
#define	note_Eb0	19.45
#define	note_E0		20.60
#define	note_F0		21.83
#define	note_Gb0	23.12
#define	note_G0		24.50
#define	note_Ab0	25.96
#define	note_A0		27.50
#define	note_Bb0	29.14
#define	note_B0		30.87
#define	note_C1		32.70
#define	note_Db1	34.65
#define	note_D1		36.71
#define	note_Eb1	38.89
#define	note_E1		41.20
#define	note_F1		43.65
#define	note_Gb1	46.25
#define	note_G1		49.00
#define	note_Ab1	51.91
#define	note_A1		55.00
#define	note_Bb1	58.27
#define	note_B1		61.74
#define	note_C2		65.41
#define	note_Db2	69.30
#define	note_D2		73.42
#define	note_Eb2	77.78
#define	note_E2		82.41
#define	note_F2		87.31
#define	note_Gb2	92.50
#define	note_G2		98.00
#define	note_Ab2	103.83
#define	note_A2		110.00
#define	note_Bb2	116.54
#define	note_B2		123.47
#define	note_C3		130.81
#define	note_Db3	138.59
#define	note_D3		146.83
#define	note_Eb3	155.56
#define	note_E3		164.81
#define	note_F3		174.61
#define	note_Gb3	185.00
#define	note_G3		196.00
#define	note_Ab3	207.65
#define	note_A3		220.00
#define	note_Bb3	233.08
#define	note_B3		246.94
#define	note_C4		261.63
#define	note_Db4	277.18
#define	note_D4		293.66
#define	note_Eb4	311.13
#define	note_E4		329.63
#define	note_F4		349.23
#define	note_Gb4	369.99
#define	note_G4		392.00
#define	note_Ab4	415.30
#define	note_A4		440.00
#define	note_Bb4	466.16
#define	note_B4		493.88
#define	note_C5		523.25
#define	note_Db5	554.37
#define	note_D5		587.33
#define	note_Eb5	622.25
#define	note_E5		659.26
#define	note_F5		698.46
#define	note_Gb5	739.99
#define	note_G5		783.99
#define	note_Ab5	830.61
#define	note_A5		880.00
#define	note_Bb5	932.33
#define	note_B5		987.77
#define	note_C6		1046.50
#define	note_Db6	1108.73
#define	note_D6		1174.66
#define	note_Eb6	1244.51
#define	note_E6		1318.51
#define	note_F6		1396.91
#define	note_Gb6	1479.98
#define	note_G6		1567.98
#define	note_Ab6	1661.22
#define	note_A6		1760.00
#define	note_Bb6	1864.66
#define	note_B6		1975.53
#define	note_C7		2093.00
#define	note_Db7	2217.46
#define	note_D7		2349.32
#define	note_Eb7	2489.02
#define	note_E7		2637.02
#define	note_F7		2793.83
#define	note_Gb7	2959.96
#define	note_G7		3135.96
#define	note_Ab7	3322.44
#define	note_A7		3520.01
#define	note_Bb7	3729.31
#define	note_B7		3951.07
#define	note_C8		4186.01
#define	note_Db8	4434.92
#define	note_D8		4698.64
#define	note_Eb8	4978.03
// DURATION OF THE NOTES
#define BPM 120    //  you can change this value changing all the others
#define H 2*Q //half 2/4
#define Q 60000/BPM //quarter 1/4
#define E Q/2   //eighth 1/8
#define S Q/4 // sixteenth 1/16
#define W 4*Q // whole 4/4

/*
	tone(8,LA3,Q);
	delay(1+Q); //delay duration should always be 1 ms more than the note in order to separate them.
	tone(8,LA3,Q);
	delay(1+Q);
	tone(8,LA3,Q);
	delay(1+Q);
	tone(8,F3,E+S);
	delay(1+E+S);
	tone(8,C4,S);
	delay(1+S);	
	tone(8,LA3,Q);
	delay(1+Q);
	tone(8,F3,E+S);
	delay(1+E+S);
	tone(8,C4,S);
	delay(1+S);
	tone(8,LA3,H);
	delay(1+H);
	
	tone(8,E4,Q);
	delay(1+Q);
	tone(8,E4,Q);
	delay(1+Q);
	tone(8,E4,Q);
	delay(1+Q);
	tone(8,F4,E+S);
	delay(1+E+S);
	tone(8,C4,S);
	delay(1+S);	
	tone(8,Ab3,Q);
	delay(1+Q);
	tone(8,F3,E+S);
	delay(1+E+S);
	tone(8,C4,S);
	delay(1+S);
	tone(8,LA3,H);
	delay(1+H);
	
	tone(8,LA4,Q);
	delay(1+Q);
	tone(8,LA3,E+S);
	delay(1+E+S);
	tone(8,LA3,S);
	delay(1+S);
	tone(8,LA4,Q);
	delay(1+Q);
	tone(8,Ab4,E+S);
	delay(1+E+S);
	tone(8,G4,S);
	delay(1+S);
	tone(8,Gb4,S);
	delay(1+S);
	tone(8,E4,S);
	delay(1+S);
	tone(8,F4,E);
	delay(1+E);
	delay(1+E);//PAUSE

	tone(8,Bb3,E);
	delay(1+E);
	tone(8,Eb4,Q);
	delay(1+Q);
	tone(8,D4,E+S);
	delay(1+E+S);
	tone(8,Db4,S);
	delay(1+S);	
	tone(8,C4,S);
	delay(1+S);
	tone(8,B3,S);
	delay(1+S);
	tone(8,C4,E);
	delay(1+E);
	delay(1+E);//PAUSE QUASI FINE RIGA

	tone(8,F3,E);
	delay(1+E);
	tone(8,Ab3,Q);
	delay(1+Q);
	tone(8,F3,E+S);
	delay(1+E+S);
	tone(8,LA3,S);
	delay(1+S);	
	tone(8,C4,Q);
	delay(1+Q);
	tone(8,LA3,E+S);
	delay(1+E+S);
	tone(8,C4,S);
	delay(1+S);
	tone(8,E4,H);
	delay(1+H);
	
	tone(8,LA4,Q);
	delay(1+Q);
	tone(8,LA3,E+S);
	delay(1+E+S);
	tone(8,LA3,S);
	delay(1+S);
	tone(8,LA4,Q);
	delay(1+Q);
	tone(8,Ab4,E+S);
	delay(1+E+S);
	tone(8,G4,S);
	delay(1+S);	
	tone(8,Gb4,S);
	delay(1+S);
	tone(8,E4,S);
	delay(1+S);
	tone(8,F4,E);
	delay(1+E);
	delay(1+E);//PAUSE

	tone(8,Bb3,E);
	delay(1+E);
	tone(8,Eb4,Q);
	delay(1+Q);
	tone(8,D4,E+S);
	delay(1+E+S);
	tone(8,Db4,S);
	delay(1+S);	
	tone(8,C4,S);
	delay(1+S);
	tone(8,B3,S);
	delay(1+S);
	tone(8,C4,E);
	delay(1+E);
	delay(1+E);//PAUSE QUASI FINE RIGA

	tone(8,F3,E);
	delay(1+E);
	tone(8,Ab3,Q);
	delay(1+Q);
	tone(8,F3,E+S);
	delay(1+E+S);
	tone(8,C4,S);
	delay(1+S);	
	tone(8,LA3,Q);
	delay(1+Q);
	tone(8,F3,E+S);
	delay(1+E+S);
	tone(8,C4,S);
	delay(1+S);
	tone(8,LA3,H);
	delay(1+H);
	
	delay(2*H);

	*/