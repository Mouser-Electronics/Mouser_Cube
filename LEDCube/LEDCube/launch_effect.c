#include "launch_effect.h"
#include "effect.h"
#include "draw.h"
#include "gameoflife.h"

void launch_effect (int effect)
{
	int i;
    unsigned char ii;

	fill(0x00);

	switch (effect)
	{
		
		
	
		case 0:
			effect_rain(100);
			break;
		
			
		case 1:
			sendvoxels_rand_z(20,220,2000);
			break;
				
		case 2:
			effect_random_filler(5,1);
			effect_random_filler(5,0);
			effect_random_filler(5,1);
			effect_random_filler(5,0);
			break;
				
				
		case 3:
			effect_wormsqueeze (2, AXIS_Z, -1, 100, 1000);
			break;
				
		case 4:
			effect_blinky2();
			break;
				
		case 5: 
            for (ii=0;ii<8;ii++)
			{
				effect_box_shrink_grow (1, ii%4, ii & 0x04, 450);
			}

			effect_box_woopwoop(800,0);
			effect_box_woopwoop(800,1);
			effect_box_woopwoop(800,0);
			effect_box_woopwoop(800,1);
			break;
			
		case 6:
			effect_planboing (AXIS_Z, 400);
			effect_planboing (AXIS_X, 400);
			effect_planboing (AXIS_Y, 400);
			effect_planboing (AXIS_Z, 400);
			effect_planboing (AXIS_X, 400);
			effect_planboing (AXIS_Y, 400);
			fill(0x00);
			break;
		
		case 7:
			fill(0x00);
			effect_telcstairs(0,800,0xff);
			effect_telcstairs(0,800,0x00);
			effect_telcstairs(1,800,0xff);
			effect_telcstairs(1,800,0xff);
			break;
			
		case 8:
			effect_axis_updown_randsuspend(AXIS_Z, 550,5000,0);
			effect_axis_updown_randsuspend(AXIS_Z, 550,5000,1);
			effect_axis_updown_randsuspend(AXIS_Z, 550,5000,0);
			effect_axis_updown_randsuspend(AXIS_Z, 550,5000,1);
			effect_axis_updown_randsuspend(AXIS_X, 550,5000,0);
			effect_axis_updown_randsuspend(AXIS_X, 550,5000,1);
			effect_axis_updown_randsuspend(AXIS_Y, 550,5000,0);
			effect_axis_updown_randsuspend(AXIS_Y, 550,5000,1);
			break;
			
		case 9:
			effect_loadbar(2000);
			break;
			
		case 10:
			effect_wormsqueeze (1, AXIS_Z, 1, 100, 1000);
			break;
			
			
		case 11:
			effect_stringfly2("MOUSER.COM");
			break;
			
			
		case 12:
			effect_boxside_randsend_parallel (AXIS_Z, 0 , 200,1);
			delay_ms(1500);
			effect_boxside_randsend_parallel (AXIS_Z, 1 , 200,1);
			delay_ms(1500);
			
			effect_boxside_randsend_parallel (AXIS_Z, 0 , 200,2);
			delay_ms(1500);
			effect_boxside_randsend_parallel (AXIS_Z, 1 , 200,2);
			delay_ms(1500);
			
			effect_boxside_randsend_parallel (AXIS_Y, 0 , 200,1);
			delay_ms(1500);
			effect_boxside_randsend_parallel (AXIS_Y, 1 , 200,1);
			delay_ms(1500);
			break;
			
		case 13:
			boingboing(250, 600, 0x01, 0x02);
			break;
			
		case 14:
			effect_pathspiral(100,1000);
			break;
			
		case 15:
			effect_path_bitmap(700,2,3);
			break;
			
		case 16:
			effect_path_text(2000,"M O U S E R . C O M");
			break;
	
		case 17:
			effect_rand_patharound(200,500);
			break;
			
		case 18:
			effect_wormsqueeze (3, AXIS_Z, -1, 100, 1000);
			break;
			
		case 19:
			effect_smileyspin(2,2500,4);
			break;
			
		case 20:
			effect_random_sparkle();
			break;
			
		case 21:
			effect_wormsqueeze (4, AXIS_Z, -1, 100, 1000);
			break;
		
		case 22:
			boingboing(250, 600, 0x01, 0x03);
			break;
			
		case 23:
			effect_smileyspin(2,2500,2);
			break;
		
		case 24:
			fill_cube(3,1000);
			break;
			
			
		//case 00:
		//effect_smileyspin(1,2,6);
		
		//break;
		
	
		
		// In case the effect number is out of range:
		default:
			effect_stringfly2("FAIL");
			break;
		
		

	}
}

