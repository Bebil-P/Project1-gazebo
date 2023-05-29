#include <gazebo/gazebo.hh>
#include <string.h>
namespace gazebo
{
  class WorldPluginMyRobot : public WorldPlugin
  {
    public: WorldPluginMyRobot() : WorldPlugin()
            {
		std::string name;
              	std::cout<<("Hello World!\n");
	      	std::cout<<("Greetings\n");
 		std::cout<<("whats your name: \n");
		std::cin >> name;
		std::cout<< "Welcome " <<name << "\n";
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}
