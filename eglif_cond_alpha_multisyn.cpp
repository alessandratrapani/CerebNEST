/* generated by template org.nest.nestml.neuron.NeuronClass*/
/*
*  gif_psc_exp_multisynapse_mihalas.cpp
*
*  This file is part of NEST.
*
*  Copyright (C) 2004 The NEST Initiative
*
*  NEST is free software: you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation, either version 2 of the License, or
*  (at your option) any later version.
*
*  NEST is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with NEST.  If not, see <http://www.gnu.org/licenses/>.
*
*/

// C++ includes:
#include <limits>

// Includes from libnestutil:
#include "numerics.h"
#include "stdio.h"
#include <iostream>

#include <time.h>

// Includes from nestkernel:
#include "exceptions.h"
#include "kernel_manager.h"
#include "universal_data_logger_impl.h"

// Includes from sli:
#include "dict.h"
#include "dictutils.h"
#include "doubledatum.h"
#include "integerdatum.h"
#include "lockptrdatum.h"

#include "eglif_cond_alpha_multisyn.h"

std::vector <float> spikes_times_;

/* ----------------------------------------------------------------
* Recordables map
* ---------------------------------------------------------------- */
nest::RecordablesMap<eglif_cond_alpha_multisyn>
    eglif_cond_alpha_multisyn::recordablesMap_;

namespace nest {
// Override the create() method with one call to RecordablesMap::insert_()
// for each quantity to be recorded.
template <> void RecordablesMap<eglif_cond_alpha_multisyn>::create() {
  // use standard names whereever you can for consistency!
  /* generated by template org.nest.nestml.function.RecordCallback*/
  
 
  insert_("I_stc1", &eglif_cond_alpha_multisyn::get_I_stc1);

  /* generated by template org.nest.nestml.function.RecordCallback*/

  insert_("I_stc2", &eglif_cond_alpha_multisyn::get_I_stc2);


  insert_("V_th", &eglif_cond_alpha_multisyn::get_V_th);

 
  //insert_("y_0", &eglif_cond_alpha_multisyn::get_y_0);

  /* generated by template org.nest.nestml.function.RecordCallback*/

  insert_("V_m", &eglif_cond_alpha_multisyn::get_V_m);


  insert_("I_gen", &eglif_cond_alpha_multisyn::get_I_gen);

  
  insert_("sum_buffer", &eglif_cond_alpha_multisyn::get_sum_buffer);


  insert_("G1", &eglif_cond_alpha_multisyn::get_G1);


  insert_("DG1", &eglif_cond_alpha_multisyn::get_DG1);


  insert_("G2", &eglif_cond_alpha_multisyn::get_G2);


  insert_("DG2", &eglif_cond_alpha_multisyn::get_DG2);


  insert_("G3", &eglif_cond_alpha_multisyn::get_G3);


  insert_("DG3", &eglif_cond_alpha_multisyn::get_DG3);


  
  /* generated by template org.nest.nestml.function.RecordCallback*/

 

  /* generated by template org.nest.nestml.function.RecordCallback*/

  //insert_("time", &eglif_cond_alpha_multisyn::get_time);

  /* generated by template org.nest.nestml.function.RecordCallback*/



  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the RefractoryCounts with the domain type long

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the r with the domain type long

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the bufferT with the domain type double

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the tot_cur with the domain type double

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the receptors with the domain type long

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the C_m with the domain type double

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the tau_m with the domain type double

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the tau_syn with the domain type double

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the t_ref with the domain type double

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the E_L with the domain type double

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the V_reset with the domain type double

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the a with the domain type double

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the b with the domain type double

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the Vth_inf with the domain type double

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the Vth_reset with the domain type double

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the Vth_init with the domain type double

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the k1 with the domain type double

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the k2 with the domain type double

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the R1 with the domain type double

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the R2 with the domain type double

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the A1 with the domain type double

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the A2 with the domain type double

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the I_e with the domain type double

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the bT_size with the domain type long

  /* generated by template org.nest.nestml.function.RecordCallback*/

  // ignores the I_tot with the domain type double
}
}

/* ----------------------------------------------------------------
* Default constructors defining default parameters and state
* ---------------------------------------------------------------- */

eglif_cond_alpha_multisyn::Parameters_::Parameters_() {}

eglif_cond_alpha_multisyn::State_::State_() {}

/* ----------------------------------------------------------------
* Parameter and state extractions and manipulation functions
* ---------------------------------------------------------------- */

void eglif_cond_alpha_multisyn::Parameters_::set(
    const DictionaryDatum &__d) {}

void eglif_cond_alpha_multisyn::State_::set(const DictionaryDatum &__d,
                                                   const Parameters_ &p) {}

eglif_cond_alpha_multisyn::Buffers_::Buffers_(
    eglif_cond_alpha_multisyn &n)
    : logger_(n), s_(0), c_(0), e_(0) {}

eglif_cond_alpha_multisyn::Buffers_::Buffers_(
    const Buffers_ &, eglif_cond_alpha_multisyn &n)
    : logger_(n), s_(0), c_(0), e_(0) {}

/* ----------------------------------------------------------------
* Default and copy constructor for node
* ---------------------------------------------------------------- */
// TODO inner components
eglif_cond_alpha_multisyn::eglif_cond_alpha_multisyn()
    : Archiving_Node(), P_(), S_(), B_(*this) {
  recordablesMap_.create();


  /* generated by template org.nest.nestml.function.MemberInitialization*/

  P_.C_m = 250;
 
 /* generated by template org.nest.nestml.function.MemberInitialization*/


  /* generated by template org.nest.nestml.function.MemberInitialization*/

  P_.tau_m = 10;

  /* generated by template org.nest.nestml.function.MemberInitialization*/

 //.resize(V_.receptors, 2);

/* generated by template org.nest.nestml.function.MemberInitialization*/
 //P_.E_rev.resize(V_.receptors, 0.0);
  
  P_.tau_syn1 = 2.0;
  P_.tau_syn2 = 2.0;
  P_.tau_syn3 = 2.0;

  P_.E_rev1 = 0.0;
  P_.E_rev2 = 0.0;
  P_.E_rev3 = 0.0;

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  P_.t_ref = 2;

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  P_.E_L = ((-70.0));



  /* generated by template org.nest.nestml.function.MemberInitialization*/

  P_.V_reset = get_E_L();

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  P_.a = 50;		// Interval to compute the number of spike for frequency for threshold adaptation [ms]	//pow((5), (((-1))));

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  P_.b = 0.025;		//relationship between 		//pow((10), (((-1))));

  P_.c = pow((10), (((-1))));

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  P_.Vth_inf = ((-30.0));

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  P_.Vth_reset = ((-40.0));

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  P_.Vth_init = ((-45.0));

  P_.Vinit = ((-60.0));

  P_.Vmin = ((-110.0));

  /* Added for stochasticity*/
  P_.lambda_0 = ((0.001));	// [1/ms]
  P_.delta_V = ((0.5));		// [mV]

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  P_.k1 = pow((200), (((-1))));

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  P_.k2 = pow((20), (((-1))));

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  P_.R1 = 0;

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  P_.R2init = 1;

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  P_.A1 = 10.0;

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  P_.A2 = ((-0.6));
 
  P_.adaptC = 0.0;

  P_.stc2_0 = 0.0;

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  P_.I_e = 0;

  P_.Ie_const = 0;
  P_.Ie_sinA = 0;
  P_.Ie_sinF = 0;

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  
  P_.bT_size = 200;

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  S_.y_[State_::I_stc1] = 0.0;

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  S_.y_[State_::I_stc2] = 0.0;

 
  
 // S_.y_[State_::y_0] = 0.0;

 // S_.y_[State_::y_1] = 0.0;

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  //S_.y_[State_::V_m] = ((-70.0));
 S_.y_[State_::V_m] = P_.V_reset;
 // S_.y_[State_::V_m] = P_.E_L;

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  //S_.y_[State_::V_th] = get_Vth_init();

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  //S_.y_[State_::time] = 0;
  S_.time = 0;
   
  S_.sto_0 = 0;

  S_.sto_1 = 0;

  

/* generated by template org.nest.nestml.function.MemberInitialization*/

  S_.y_[State_::G1] = 0;

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  S_.y_[State_::DG1] = 0;

/* generated by template org.nest.nestml.function.MemberInitialization*/

  S_.y_[State_::G2] = 0;

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  S_.y_[State_::DG2] = 0;

/* generated by template org.nest.nestml.function.MemberInitialization*/

  S_.y_[State_::G3] = 0;

  /* generated by template org.nest.nestml.function.MemberInitialization*/

  S_.y_[State_::DG3] = 0;

}

eglif_cond_alpha_multisyn::eglif_cond_alpha_multisyn(
    const eglif_cond_alpha_multisyn &n)
    : Archiving_Node(), P_(n.P_), S_(n.S_), B_(n.B_, *this) {}

/* ----------------------------------------------------------------
* Destructors
* ---------------------------------------------------------------- */

eglif_cond_alpha_multisyn::~eglif_cond_alpha_multisyn() {
  // GSL structs may not have been allocated, so we need to protect destruction
  if (B_.s_)
    gsl_odeiv_step_free(B_.s_);
  if (B_.c_)
    gsl_odeiv_control_free(B_.c_);
  if (B_.e_)
    gsl_odeiv_evolve_free(B_.e_);

}

/* ----------------------------------------------------------------
* Node initialization functions
* ---------------------------------------------------------------- */

void eglif_cond_alpha_multisyn::init_state_(
    const Node &proto) { // TODO inner components

  const eglif_cond_alpha_multisyn &pr =
      downcast<eglif_cond_alpha_multisyn>(proto);
  S_ = pr.S_;
}

/* generated by template org.nest.nestml.function.GSLDifferentiationFunction*/
extern "C" inline int
eglif_cond_alpha_multisyn_dynamics(double, const double y[], double f[],
                                          void *pnode) {

  //const double tIe = nest::kernel().simulation_manager.get_time().get_ms();

  typedef eglif_cond_alpha_multisyn::State_ State_;
  // get access to node so we can almost work as in a member function
  assert(pnode);
  const eglif_cond_alpha_multisyn &node =
      *(reinterpret_cast<eglif_cond_alpha_multisyn *>(pnode));

  // y[] here is---and must be---the state vector supplied by the integrator,
  // not the state vector in the node, node.S_.y_[].


  // Synaptic current: I_syn = - sum_k g_k (V - E_rev_k).
  double I_syn = 0.0;
  I_syn += y[ State_::G1] * ( node.get_E_rev1() - y[State_::V_m] );
  I_syn += y[ State_::G2] * ( node.get_E_rev2() - y[State_::V_m] );
  I_syn += y[ State_::G3] * ( node.get_E_rev3() - y[State_::V_m] );


  // Total current
  double I_tot = y[State_::I_stc1] - y[State_::I_stc2] + node.get_Ie_const() + node.B_.currents_last_value_ + I_syn;
		
		//node.S_.sto_1;

		// node.get_Ie_sinA() * std::sin(2.0*numerics::pi*node.get_Ie_sinF()*y[State_::time]/1000.0) +

  // Model currents
  f[State_::I_stc1] = ((-node.get_k1())) * y[State_::I_stc1];
  f[State_::I_stc2] = ((-node.get_k2())) * y[State_::I_stc2] + node.get_adaptC()*(y[State_::V_m] - node.get_E_L());

 
  f[State_::V_m] =
      ((1)) / node.get_tau_m() * (y[State_::V_m] - node.get_E_L()) +
      1 / node.get_C_m() * I_tot ;
    
 // Conductance dynamics
  // Synaptic conductance derivative dG/dt
  f[State_::DG1] = -y[State_::DG1] / node.get_tau_syn1();
  f[State_::G1] = y[ State_::DG1] - y[ State_::G1] / node.get_tau_syn1();

  f[State_::DG2] = -y[State_::DG2] / node.get_tau_syn2();
  f[State_::G2] = y[ State_::DG2] - y[ State_::G2] / node.get_tau_syn2();

  f[State_::DG3] = -y[State_::DG3] / node.get_tau_syn3();
  f[State_::G3] = y[ State_::DG3] - y[ State_::G3] / node.get_tau_syn3();

  return GSL_SUCCESS;
}

void eglif_cond_alpha_multisyn::init_buffers_() {
  B_.get_spikes_r1().clear();   // includes resize
  B_.get_spikes_r2().clear(); 
  B_.get_spikes_r3().clear(); 
  B_.get_currents().clear(); // includes resize
  B_.logger_.reset();     // includes resize
  Archiving_Node::clear_history();
  
  int state_size = State_::STATE_VEC_SIZE;

  if (B_.s_ == 0)
    B_.s_ = gsl_odeiv_step_alloc(gsl_odeiv_step_rkf45, State_::STATE_VEC_SIZE);
  else
    gsl_odeiv_step_reset(B_.s_);

  if (B_.c_ == 0) {
    B_.c_ = gsl_odeiv_control_y_new(1e-6, 0.0);
  } else {
    gsl_odeiv_control_init(B_.c_, 1e-6, 0.0, 1.0, 0.0);
  }

  if (B_.e_ == 0) {
    B_.e_ = gsl_odeiv_evolve_alloc(State_::STATE_VEC_SIZE);
  } else {
    gsl_odeiv_evolve_reset(B_.e_);
  }


  B_.sys_.function = eglif_cond_alpha_multisyn_dynamics;
  B_.sys_.jacobian = NULL;
  B_.sys_.dimension = state_size;
  B_.sys_.params = reinterpret_cast<void *>(this);
}

void eglif_cond_alpha_multisyn::calibrate() {
  B_.logger_.init();

  // Per Ie sinusoidal in STO -> not used anymore; now intrinsic in the model
  const double h = nest::Time::get_resolution().get_ms();
  const double current_time = nest::kernel().simulation_manager.get_time().get_ms();

  // scale Hz to ms
  const double omega = 2.0 * numerics::pi * P_.Ie_sinF / 1000.0;
  
  // initial state
  S_.sto_0 = P_.Ie_sinA * std::cos( omega * current_time );
  S_.sto_1 = P_.Ie_sinA * std::sin( omega * current_time );

  // matrix elements
  V_.A_00_ = std::cos( omega * h );
  V_.A_01_ = -std::sin( omega * h );
  V_.A_10_ = std::sin( omega * h );
  V_.A_11_ = std::cos( omega * h );

  /* generated by template org.nest.nestml.function.Calibrate*/
  srand(time(NULL));
  V_.rng_ = nest::kernel().rng_manager.get_rng( get_thread() );

  V_.RefractoryCounts =
      nest::Time(nest::Time::ms((double)P_.t_ref)).get_steps();

  /* generated by template org.nest.nestml.function.Calibrate*/

  V_.r = 0;

  V_.receptors = 3;			// Number of receptor ports
  
  V_.V_th = -50.0;
  
  V_.I_gen = 0.0;

  V_.sum_buffer = 0.0;


  V_.G0.resize( V_.receptors);

  /* generated by template org.nest.nestml.function.Calibrate*/
  V_.G0[0] = 1.0*numerics::e / P_.tau_syn1;
  //std::cout<<"Init G0_1: "<<V_.G0[0] << std::endl;
  V_.G0[1] = 1.0*numerics::e / P_.tau_syn2;
  V_.G0[2] = 1.0*numerics::e / P_.tau_syn3;
  
  /* generated by template org.nest.nestml.function.Calibrate*/

  V_.bufferT.resize(P_.bT_size);
  for (long i = 0; i < get_bT_size(); i++) {
    V_.bufferT[i] = 0;				// Non è qui il problema
  }

  /* generated by template org.nest.nestml.function.Calibrate*/

  V_.tot_cur = 0;

  // Receptors initialization
  //B_.spikes.resize(V_.receptors);

  B_.receptor_types_.resize(3);
  
  for (long i = 0; i < V_.receptors; i++) {
    B_.receptor_types_[i] = i + 1;			// Assign to ports (receptor_type) numbers from 1 to receptors (= receptors number)
  }

}

/* ----------------------------------------------------------------
* Update and spike handling functions: adapted from the file generate by NESTML to update the buffer of external currents
* ---------------------------------------------------------------- */

/*

 */
void eglif_cond_alpha_multisyn::update(nest::Time const &origin,
                                              const long from, const long to) {

  double step_ = nest::Time::get_resolution().get_ms();
  double IntegrationStep_ = nest::Time::get_resolution().get_ms();
  double t = 0;

  //std::cout << S_.time << std::endl;

  //if (S_.y_[State_::time] < 2){				
  if (S_.time < 2){				
	  V_.V_th = get_Vth_init();
	  S_.y_[State_::V_m] = get_Vinit();
    } 

  if ( S_.y_[State_::V_m] < P_.Vmin){	
	  S_.y_[State_::V_m] = get_Vmin();
    } 
  //std::cout<<S_.time<<std::endl;
  V_.old_Vm = V_.new_Vm;
  V_.new_Vm = S_.y_[State_::V_m];
 

  for (long lag = from; lag < to; ++lag) {
   // std::cout << S_.y_[State_::y_0] << " " << step_ <<std::endl;
    // TODO this case must be handled uniformly, also NESTReferenceConverter
    // must be adopted
    B_.spikes_r1_last_value_ = get_spikes_r1().get_value(lag);
    // TODO this case must be handled uniformly, also NESTReferenceConverter
    // must be adopted
    B_.spikes_r2_last_value_ = get_spikes_r2().get_value(lag);
    // TODO this case must be handled uniformly, also NESTReferenceConverter
    // must be adopted
    B_.spikes_r3_last_value_ = get_spikes_r3().get_value(lag);

   // STO - numerical integration
    const double y_0 = S_.sto_0;
    S_.sto_0 = V_.A_00_ * y_0 + V_.A_01_ * S_.sto_1;
    S_.sto_1 = V_.A_10_ * y_0 + V_.A_11_ * S_.sto_1;


    B_.currents_last_value_ = get_currents().get_value(lag);

    /* generated by template org.nest.spl.Block*/
    /* generated by template org.nest.spl.Statement*/

    // # Aggiorno il buffer delle correnti esterne e la loro somma

    /* generated by template org.nest.spl.SmallStatement*/
    /* generated by template org.nest.spl.Assignment*/
    
   if (lag == from){
    //S_.y_[State_::time] += 1;
    S_.time += 1;

    V_.I_gen = B_.currents_last_value_;
    V_.tot_cur = B_.currents_last_value_;

    for (int i = 0; i < P_.bT_size; i++) {
      V_.bufferT[i] = V_.bufferT[i+1];
    }
    int index = P_.bT_size-1;
    V_.bufferT[index] = V_.tot_cur;
    //std::cout<<V_.tot_cur<< " " << P_.bT_size <<std::endl;
    /* generated by template org.nest.spl.Statement*/
    //
    /* generated by template org.nest.spl.SmallStatement*/
    /* generated by template org.nest.spl.Assignment*/
    V_.sum_buffer = 0;
    for (int i = 0; i < P_.bT_size; i++) {
     // V_.sum_buffer += V_.bufferT[i];
     V_.sum_buffer += V_.bufferT[i];		// questa riga funziona
     //S_.y_[State_::sum_buffer] += V_.tot_cur;
    }
    //std::cout<<S_.y_[State_::sum_buffer]<<" "<<V_.bufferT[0]<<" "<<V_.bufferT[9]<<std::endl;
    /* generated by template org.nest.spl.Statement*/
    //
    /* generated by template org.nest.spl.CompoundStatement*/
    /* generated by template org.nest.spl.IfStatement*/

    }

// Da eliminare: correnti STC attive sempre, non solo con stim esterna!! Att: da eliminare anche nel blocco update!
    //if (S_.y_[State_::sum_buffer] == 0) {
		/* generated by template org.nest.spl.Block*/
		/* generated by template org.nest.spl.Statement*/
		//
		/* generated by template org.nest.spl.SmallStatement*/
		/* generated by template org.nest.spl.Assignment*/
	//S_.y_[State_::I_stc1] = 0;

		/* generated by template org.nest.spl.Statement*/
		//
		/* generated by template org.nest.spl.SmallStatement*/
		/* generated by template org.nest.spl.Assignment*/
	//S_.y_[State_::I_stc2] = 0;

   //  }

    if (V_.r == 0) {
    	
      /* generated by template org.nest.spl.Block*/
      /* generated by template org.nest.spl.Statement*/
      //
      /* generated by template org.nest.spl.SmallStatement*/
      /* generated by template org.nest.spl.FunctionCall*/
      /* generated by template org.nest.spl.GSLIntegrator*/
      t = 0;
      
      while (t < step_) {
    	//std::cout << t << step_ << std::endl;
        const int status =
            gsl_odeiv_evolve_apply(B_.e_, B_.c_, B_.s_,
                                   &B_.sys_,          // system of ODE
                                   &t,                // from t
                                   step_,             // to t <= step
                                   &IntegrationStep_, // integration step size
				   S_.y_);
        //std::cout << status << std::endl;
        if (status != GSL_SUCCESS) {
	 // std::cout<<"error solver"<<std::endl;
          throw nest::GSLSolverFailure(get_name(), status);
        }
      }

    } else {
      /* generated by template org.nest.spl.Block*/
      /* generated by template org.nest.spl.Statement*/
      //
      /* generated by template org.nest.spl.SmallStatement*/
      /* generated by template org.nest.spl.Assignment*/
      V_.r = V_.r - 1;

    } /* if end */

    /* generated by template org.nest.spl.Statement*/
    //
    /* generated by template org.nest.spl.CompoundStatement*/
    /* generated by template org.nest.spl.IfStatement*/

    /* Added for stochasticity*/
    const double lambda =
        P_.lambda_0 * std::exp( ( S_.y_[State_::V_m] - V_.V_th ) / P_.delta_V );

    //if (S_.y_[State_::V_m] >= S_.y_[State_::V_th]) {		// Condition for spike generation without stochasticity
      /* generated by template org.nest.spl.Block*/
      /* generated by template org.nest.spl.Statement*/
      //
      /* generated by template org.nest.spl.SmallStatement*/
      /* generated by template org.nest.spl.Assignment*/

    if (lambda > 0.0)
    {
	if ( ((double) rand() / (RAND_MAX))			//V_.rng_->drand()		
          < -numerics::expm1( -lambda * nest::Time::get_resolution().get_ms() ) )
        {									/////////// Spike generation!!!! ///////////
	     //std::cout<<"spike!"<<std::endl;
	     spikes_times_.push_back(S_.time);
	      V_.r = V_.RefractoryCounts;

	      // Update of the buffer of spikes times
	      // compute the mean frequency (1/ISI) of the last 3 spikes
	      // Update of Vth based on the frequency of last 3 spikes: Vth = Vth_start+constant*(f-f_tonic); e.g. constant = a, b, c (gi� definiti nel modello)

		// Vm slope update to 
	      V_.old_slope = V_.new_slope;
  	      V_.new_slope = V_.new_Vm - V_.old_Vm;


	      /* generated by template org.nest.spl.Statement*/
	      //
	      /* generated by template org.nest.spl.SmallStatement*/
	      /* generated by template org.nest.spl.Assignment*/
	      S_.y_[State_::V_m] = P_.V_reset;

		// Threshold update based on frequency in the last P_.a ms (default 50 ms)
		int lim_sup = S_.time;
		int lim_inf = S_.time-P_.a;
		int num_spk = 0;
		for (int i = 1; i<spikes_times_.size(); i++){
			if (spikes_times_[i-1]>lim_inf && spikes_times_[i-1]<lim_sup)
				num_spk += 1;
		}
	
		float frequ = num_spk*1000/P_.a;
		V_.V_th = P_.Vth_init + P_.b*frequ;

	      /* generated by template org.nest.spl.Statement*/
	      // # If there has not been any external input current in the last
	      // simulation steps, the spike-triggered currents should be 0# if currents
	      // > 0:		# Error: Only numeric types can be compared.. Code
	      // generation was canceled.# if current > 0:			# Error:
	      // The variable current is not defined.. Code generation was canceled. #
	      // And I suppose I can not define the variable 'current' as it is the
	      // input to the neuron
	      /* generated by template org.nest.spl.CompoundStatement*/
	      /* generated by template org.nest.spl.IfStatement*/

	     //	 if (S_.y_[State_::sum_buffer] == 0) {
		/* generated by template org.nest.spl.Block*/
		/* generated by template org.nest.spl.Statement*/
		//
		/* generated by template org.nest.spl.SmallStatement*/
		/* generated by template org.nest.spl.Assignment*/
			//S_.y_[State_::I_stc1] = 0;

		/* generated by template org.nest.spl.Statement*/
		//
		/* generated by template org.nest.spl.SmallStatement*/
		/* generated by template org.nest.spl.Assignment*/
			//S_.y_[State_::I_stc2] = 0;

	 	   //  } else {
		/* generated by template org.nest.spl.Block*/
		/* generated by template org.nest.spl.Statement*/
		//
		/* generated by template org.nest.spl.SmallStatement*/
		/* generated by template org.nest.spl.Assignment*/
		S_.y_[State_::I_stc1] *= P_.R1;

		/* generated by template org.nest.spl.Statement*/
		//
		/* generated by template org.nest.spl.SmallStatement*/
		/* generated by template org.nest.spl.Assignment*/
		S_.y_[State_::I_stc1] += P_.A1;

		/* generated by template org.nest.spl.Statement*/
		//
		/* generated by template org.nest.spl.SmallStatement*/
		/* generated by template org.nest.spl.Assignment*/
			//S_.y_[State_::I_stc2] *= P_.R2;		[Mihalas original model]
		//if ((V_.new_slope-V_.old_slope)>0.6){
			V_.R2 = P_.R2init;
		//	std::cout << S_.y_[State_::time] << std::endl;
		//}
		//else{
		//	V_.R2 = 0.95*V_.R2;
			//std::cout << "ok" << std::endl;
     	//	}

		S_.y_[State_::I_stc2] *= V_.R2;

		/* generated by template org.nest.spl.Statement*/
		//
		/* generated by template org.nest.spl.SmallStatement*/
		/* generated by template org.nest.spl.Assignment*/
		//S_.y_[State_::I_stc2] += P_.A2*B_.currents_last_value_;
		
		/* if (S_.y_[State_::sum_buffer] < 0)
		{
		   S_.y_[State_::I_stc2] -= P_.A2;
		}else{*/
		   S_.y_[State_::I_stc2] += P_.A2;
		//}

      	      //} /* if check buffer correnti end */

	      /* generated by template org.nest.spl.Statement*/
	      //
	      /* generated by template org.nest.spl.CompoundStatement*/
	      /* generated by template org.nest.spl.IfStatement*/

	      if (V_.V_th < P_.Vth_reset) { // -> for minimum	if (S_.y_[State_::V_th] > P_.Vth_reset) {    // -> for maximum threshold 
		/* generated by template org.nest.spl.Block*/
		/* generated by template org.nest.spl.Statement*/
		//
		/* generated by template org.nest.spl.SmallStatement*/
		/* generated by template org.nest.spl.Assignment*/
		V_.V_th = P_.Vth_reset;
	

     	      } /* if check threshold end */

      /* generated by template org.nest.spl.Statement*/
      //
      /* generated by template org.nest.spl.SmallStatement*/
      /* generated by template org.nest.spl.FunctionCall*/
      set_spiketime(nest::Time::step(origin.get_steps() + lag + 1));
      nest::SpikeEvent se;
      nest::kernel().event_delivery_manager.send(*this, se, lag);
      ;
      } /* if (stochasticity condition) end */
    } /* if (lambda > 0) end */

    // Spikes on 1st receptor
    S_.y_[ State_::DG1 ] += B_.spikes_r1_last_value_ * V_.G0[ 0 ];
   // std::cout << "spike time: "<<B_.spikes_r1_last_value_ << " DG update: "<<S_.y_[ State_::DG1 ]<< " G0_1" << V_.G0[ 0 ] << std::endl;

    // Spikes on 2nd receptor
    S_.y_[ State_::DG2 ] += B_.spikes_r2_last_value_ * V_.G0[ 1 ];

    // Spikes on 3rd receptor
    S_.y_[ State_::DG3 ] += B_.spikes_r3_last_value_ * V_.G0[ 2 ];

/*
    for ( size_t i = 0; i < V_.get_receptors(); ++i )
    {
      S_.y_[ State_::DG1 + ( 2 * i ) ] +=
        B_.get_spikes()[ i ].get_value(lag) * V_.G0[ i ]; // add incoming spike
    }  */


    // voltage logging
    B_.logger_.record_data(origin.get_steps() + lag);
  }	// end for loop
}	// end function update

// Do not move this function as inline to h-file. It depends on
// universal_data_logger_impl.h being included here.
void eglif_cond_alpha_multisyn::handle(nest::DataLoggingRequest &e) {
  B_.logger_.handle(e);
}

void eglif_cond_alpha_multisyn::handle(nest::SpikeEvent &e) {

  assert(e.get_delay_steps() > 0);
/*
  assert(
  ( e.get_rport() > 0 ) && ( ( size_t ) e.get_rport() <= P_.get_receptors() ) );
*/
  
   //std::cout << "porta spike: "<< e.get_rport() << " ";
   if (e.get_rport()==1) {
      get_spikes_r1().add_value(
          e.get_rel_delivery_steps(
              nest::kernel().simulation_manager.get_slice_origin()),
          e.get_weight() * e.get_multiplicity());
    }else if (e.get_rport()==2){
      get_spikes_r2().add_value(
          e.get_rel_delivery_steps(
              nest::kernel().simulation_manager.get_slice_origin()),
          e.get_weight() * e.get_multiplicity());
    }else{
      get_spikes_r3().add_value(
          e.get_rel_delivery_steps(
              nest::kernel().simulation_manager.get_slice_origin()),
          e.get_weight() * e.get_multiplicity());
    }

}

void eglif_cond_alpha_multisyn::handle(nest::CurrentEvent &e) {
  assert(e.get_delay_steps() > 0);

  const double current = e.get_current();
  const double weight = e.get_weight();
  
  //std::cout<<current<<std::endl;

  // add weighted current; HEP 2002-10-04
  get_currents().add_value(
      e.get_rel_delivery_steps(
          nest::kernel().simulation_manager.get_slice_origin()),
      weight * current);
}
