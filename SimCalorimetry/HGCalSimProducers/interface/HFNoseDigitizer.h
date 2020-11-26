#ifndef SimCalorimetry_HGCSimProducers_hfnosedigitizer
#define SimCalorimetry_HGCSimProducers_hfnosedigitizer

#include "SimCalorimetry/HGCalSimProducers/interface/HGCDigitizerBase.h"
#include "DataFormats/HGCDigi/interface/HGCDigiCollections.h"

class HFNoseDigitizer : public HGCDigitizerBase {
public:
  HFNoseDigitizer(const edm::ParameterSet& ps);
  void runDigitizer(std::unique_ptr<HGCalDigiCollection>& digiColl,
                    hgc::HGCSimHitDataAccumulator& simData,
                    const CaloSubdetectorGeometry* theGeom,
                    const std::unordered_set<DetId>& validIds,
                    CLHEP::HepRandomEngine* engine) override;
  ~HFNoseDigitizer() override;

private:
};

#endif
