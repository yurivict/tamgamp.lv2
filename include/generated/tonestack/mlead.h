namespace tonestack_mlead {

/* ------------------------------------------------------------
name: "M-Lead"
Code generated with Faust 2.15.11 (https://faust.grame.fr)
Compilation options: cpp, -double -ftz 0
------------------------------------------------------------ */




static double module_faustpower2_f(double value) {
	return (value * value);
	
}


class module : public dsp {
	
 private:
	
	int fSamplingFreq;
	double fConst0;
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT fVslider1;
	double fConst1;
	FAUSTFLOAT fVslider2;
	double fConst2;
	double fRec0[4];
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("filename", "mlead");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("id", "M-Lead");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "M-Lead");
		m->declare("tonestack.dsp/id", "tonestack");
	}

	virtual int getNumInputs() {
		return 1;
		
	}
	virtual int getNumOutputs() {
		return 1;
		
	}
	virtual int getInputRate(int channel) {
		int rate;
		switch (channel) {
			case 0: {
				rate = 1;
				break;
			}
			default: {
				rate = -1;
				break;
			}
			
		}
		return rate;
		
	}
	virtual int getOutputRate(int channel) {
		int rate;
		switch (channel) {
			case 0: {
				rate = 1;
				break;
			}
			default: {
				rate = -1;
				break;
			}
			
		}
		return rate;
		
	}
	
	static void classInit(int samplingFreq) {
		
	}
	
	virtual void instanceConstants(int samplingFreq) {
		fSamplingFreq = samplingFreq;
		fConst0 = (2.0 * std::min<double>(192000.0, std::max<double>(1.0, double(fSamplingFreq))));
		fConst1 = module_faustpower2_f(fConst0);
		fConst2 = (3.0 * fConst0);
		
	}
	
	virtual void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(0.5);
		fVslider1 = FAUSTFLOAT(0.5);
		fVslider2 = FAUSTFLOAT(0.5);
		
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 4); l0 = (l0 + 1)) {
			fRec0[l0] = 0.0;
			
		}
		
	}
	
	virtual void init(int samplingFreq) {
		classInit(samplingFreq);
		instanceInit(samplingFreq);
	}
	
	virtual void instanceInit(int samplingFreq) {
		instanceConstants(samplingFreq);
		instanceResetUserInterface();
		instanceClear();
	}
	
	virtual module* clone() {
		return new module();
	}
	
	virtual int getSampleRate() {
		return fSamplingFreq;
		
	}
	
	virtual void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("M-Lead");
		ui_interface->addVerticalSlider(".ts.bass", &fVslider1, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".ts.middle", &fVslider0, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".ts.treble", &fVslider2, 0.5, 0.0, 1.0, 0.01);
		ui_interface->closeBox();
		
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		double fSlow0 = double(fVslider0);
		double fSlow1 = std::exp((3.3999999999999999 * (double(fVslider1) + -1.0)));
		double fSlow2 = ((0.00055000000000000003 * fSlow0) + (0.022500000000000003 * fSlow1));
		double fSlow3 = (fConst0 * (fSlow2 + 0.0021395000000000003));
		double fSlow4 = (3.0937500000000006e-07 * fSlow0);
		double fSlow5 = ((((((1.2375000000000003e-05 * fSlow1) + -2.1175000000000003e-08) - fSlow4) * fSlow0) + (1.9448000000000004e-05 * fSlow1)) + 6.6770000000000008e-07);
		double fSlow6 = ((1.7121500000000001e-09 * fSlow1) - (4.2803750000000003e-11 * fSlow0));
		double fSlow7 = (1.9965000000000003e-09 * fSlow1);
		double fSlow8 = ((((fSlow6 + -7.108750000000004e-12) * fSlow0) + fSlow7) + 4.9912500000000007e-11);
		double fSlow9 = (fConst0 * fSlow8);
		double fSlow10 = (1.0 / (-1.0 - (fSlow3 + (fConst1 * (fSlow5 + fSlow9)))));
		double fSlow11 = double(fVslider2);
		double fSlow12 = (fConst0 * ((fSlow2 + (0.000125 * fSlow11)) + 0.00056250000000000007));
		double fSlow13 = (((1.815e-07 * fSlow11) + (((3.7812500000000009e-07 - fSlow4) * fSlow0) + (fSlow1 * ((1.2375000000000003e-05 * fSlow0) + 3.4760000000000007e-06)))) + 8.6900000000000017e-08);
		double fSlow14 = (((fSlow6 + 4.2803750000000003e-11) * fSlow0) + ((fSlow7 - (4.9912500000000007e-11 * (fSlow0 + -1.0))) * fSlow11));
		double fSlow15 = (fConst0 * fSlow14);
		double fSlow16 = (0.0 - (fSlow12 + (fConst1 * (fSlow13 + fSlow15))));
		double fSlow17 = (fConst2 * fSlow8);
		double fSlow18 = ((fConst1 * (fSlow5 + fSlow17)) + (-3.0 - fSlow3));
		double fSlow19 = ((fSlow3 + (fConst1 * (fSlow5 - fSlow17))) + -3.0);
		double fSlow20 = (fSlow3 + (-1.0 - (fConst1 * (fSlow5 - fSlow9))));
		double fSlow21 = (fConst2 * fSlow14);
		double fSlow22 = ((fConst1 * (fSlow13 + fSlow21)) - fSlow12);
		double fSlow23 = (fSlow12 + (fConst1 * (fSlow13 - fSlow21)));
		double fSlow24 = (fSlow12 - (fConst1 * (fSlow13 - fSlow15)));
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec0[0] = (double(input0[i]) - (fSlow10 * (((fSlow18 * fRec0[1]) + (fSlow19 * fRec0[2])) + (fSlow20 * fRec0[3]))));
			output0[i] = FAUSTFLOAT((fSlow10 * ((((fSlow16 * fRec0[0]) + (fSlow22 * fRec0[1])) + (fSlow23 * fRec0[2])) + (fSlow24 * fRec0[3]))));
			for (int j0 = 3; (j0 > 0); j0 = (j0 - 1)) {
				fRec0[j0] = fRec0[(j0 - 1)];
				
			}
			
		}
		
	}

};


dsp *instantiate()
{
    return new module();
}
} /* namespace tonestack_mlead */

