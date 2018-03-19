#include "rack.hpp"


using namespace rack;


extern Plugin *plugin;

////////////////////
// module widgets
////////////////////

struct QuantovnikWidget : ModuleWidget {
	QuantovnikWidget();
};

struct MixovnikWidget : ModuleWidget {
	MixovnikWidget();
};



//////////////////////////////////////
//MODULE COMPONENTS
/////////////////////////////////////
struct Koralfx_SliderPot : SVGSlider {
	Koralfx_SliderPot() {
		Vec margin = Vec(4, 4);
		maxHandlePos = Vec(-1.5, -8).plus(margin);
		minHandlePos = Vec(-1.5, 87).plus(margin);
		background->svg = SVG::load(assetPlugin(plugin,"res/Koralfx-SliderPot.svg"));
		background->wrap();
		background->box.pos = margin;
		box.size = background->box.size.plus(margin.mult(2));
		handle->svg = SVG::load(assetPlugin(plugin,"res/Koralfx-SliderPotHandle.svg"));
		handle->wrap();
	}
};
struct Koralfx_Switch : SVGSwitch, ToggleSwitch {
	Koralfx_Switch() {
		addFrame(SVG::load(assetPlugin(plugin,"res/Koralfx_Switch_0.svg")));
		addFrame(SVG::load(assetPlugin(plugin,"res/Koralfx_Switch_1.svg")));
	}


};