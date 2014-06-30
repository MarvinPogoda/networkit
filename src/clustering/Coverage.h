/*
 * Coverage.h
 *
 *  Created on: 02.02.2013
 *      Author: Christian Staudt (christian.staudt@kit.edu)
 */

#ifndef COVERAGE_H_
#define COVERAGE_H_

#include "QualityMeasure.h"

namespace NetworKit {
	
/**
 * Coverage is the fraction of intra-cluster edges.
 */
class Coverage: public NetworKit::QualityMeasure {
public:
	Coverage();
	virtual ~Coverage();

	virtual double getQuality(const Clustering& zeta, const Graph& G);

};

} /* namespace NetworKit */
#endif /* COVERAGE_H_ */