//
// Created by elte on 20-9-15.
//

#ifndef TRIANGLEOFLIFE_EVOLUTIONKEYS_H
#define TRIANGLEOFLIFE_EVOLUTIONKEYS_H

#include <gazebo/rendering/UserCamera.hh>
#include <gazebo/common/Plugin.hh>
#include <gazebo/gui/GuiPlugin.hh>
#ifndef Q_MOC_RUN  // See: https://bugreports.qt-project.org/browse/QTBUG-22829
# include <gazebo/transport/transport.hh>
# include <gazebo/gui/gui.hh>
#endif

namespace tol {

class InteractiveEvolutionPlugin : public ::gazebo::GUIPlugin {
	Q_OBJECT
public:

	InteractiveEvolutionPlugin();
	~InteractiveEvolutionPlugin();

protected slots:
	void OnButton();

private:
	// Transport nodes for the contact messages
	::gazebo::transport::NodePtr node_;

	// Key publisher
	::gazebo::transport::PublisherPtr keyPub_;
};

}


#endif //TRIANGLEOFLIFE_EVOLUTIONKEYS_H