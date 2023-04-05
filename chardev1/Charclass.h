#ifndef Charclass_H_
#define Charclass_H_

class Character
{
    public:
        //The dimensions of the dot
		static const int CHAR_HITBOX_DIAMETER = 54;
		static const int CHAR_HITBOX_RADIUS = 27;
		static const int CHAR_HITBOX_DIS = 15;

		//Maximum axis velocity of the dot
		static const int CHAR_VEL = 4;

        Character();

        void acthandleEvent ( SDL_Event& e );

        void charmove();

        void charrender();

        void charcountdown();

        void gettype( bool tp );

        bool check_collision();

    private:
        //0 is enermy
        bool type;

        int mPosX, mPosY;
        int mVelX, mVelY;

        double degrees;

        SDL_Point Turning_point, Turning_pos;

        int mouseX, mouseY;

        int countdown;

        bulletstate bullet;

        bool shooting;

        tilemap_POS nowpos;
};

#endif // Charclass_H_