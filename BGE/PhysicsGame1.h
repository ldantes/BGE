#pragma once
#include "Game.h"
#include "PhysicsComponent.h"
#include "PhysicsFactory.h"
#include <btBulletDynamicsCommon.h>

namespace BGE
{
	class PhysicsGame1 :
		public Game
	{
	private:
		btBroadphaseInterface* broadphase;
 
		// Set up the collision configuration and dispatcher
		btDefaultCollisionConfiguration * collisionConfiguration;
		btCollisionDispatcher * dispatcher;
 
		// The actual physics solver
		btSequentialImpulseConstraintSolver * solver;

	public:
		PhysicsGame1(void);
		~PhysicsGame1(void);
		bool Initialise();
		void Update(float timeDelta);
		void Cleanup();
		void CreateWall();
		
		// The world.
		PhysicsFactory * physicsFactory;
		btDiscreteDynamicsWorld * dynamicsWorld;
	};
}