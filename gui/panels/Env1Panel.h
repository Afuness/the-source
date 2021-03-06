/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.2.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_935F64844A5D65A4__
#define __JUCE_HEADER_935F64844A5D65A4__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "PanelBase.h"
#include "EnvelopeCurve.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class Env1Panel  : public PanelBase,
                   public ComboBoxListener,
                   public SliderListener
{
public:
    //==============================================================================
    Env1Panel (SynthParams &p, int envelopeNumber);
    ~Env1Panel();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void updateCurve();
    void updateModAmountKnobs();
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged);
    void sliderValueChanged (Slider* sliderThatWasMoved);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    SynthParams::Env &env;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<ModSourceBox> envSpeedModSrc2;
    ScopedPointer<ModSourceBox> envSpeedModSrc1;
    ScopedPointer<MouseOverKnob> attackTime1;
    ScopedPointer<MouseOverKnob> decayTime1;
    ScopedPointer<MouseOverKnob> sustainLevel1;
    ScopedPointer<MouseOverKnob> releaseTime1;
    ScopedPointer<MouseOverKnob> attackShape1;
    ScopedPointer<MouseOverKnob> decayShape1;
    ScopedPointer<MouseOverKnob> releaseShape1;
    ScopedPointer<MouseOverKnob> speedMod1;
    ScopedPointer<EnvelopeCurve> envelopeCurve;
    ScopedPointer<Label> shapeLabel1;
    ScopedPointer<MouseOverKnob> speedMod2;
    ScopedPointer<Label> speedModLabel;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Env1Panel)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_935F64844A5D65A4__
