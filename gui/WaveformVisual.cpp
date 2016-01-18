#include "WaveformVisual.h"
#include "Voice.h"

void WaveformVisual::paint(Graphics &g)
{
    g.fillAll(Colours::black);
    Path wavePath;
    const float centreY = getHeight() / 2.0f;
    const float amplitude = 0.4f;
    const int width = getWidth();
    const float step = 4*float_Pi / width;
    wavePath.startNewSubPath(0, centreY);

    for (float x = 1.0f; x < width; ++x) {

        float phs = x * step;
        if (phs > (2 * float_Pi))
            phs = phs - (2 * float_Pi);

		switch (m_iWaveformKey)
		{
            case eOscWaves::eOscSquare:
                wavePath.lineTo(x, centreY - amplitude * static_cast<float>(getHeight()) * Waveforms::square(phs, m_fTrngAmount, m_fPulseWidth));
                break;
                
            case eOscWaves::eOscSaw:
                wavePath.lineTo(x, centreY - amplitude * static_cast<float>(getHeight()) * Waveforms::saw(phs, m_fTrngAmount, m_fPulseWidth));
                break;
                
            case eOscWaves::eOscNoise:
                wavePath.lineTo(x, centreY - amplitude * static_cast<float>(getHeight()) * Waveforms::whiteNoise(phs, m_fTrngAmount, m_fPulseWidth));
                break;
                
		}

    }
    g.setColour(Colours::lightgreen);
    g.strokePath(wavePath, PathStrokeType(2.5f));
}