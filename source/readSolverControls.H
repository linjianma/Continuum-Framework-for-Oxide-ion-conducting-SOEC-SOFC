const dictionary& solverControls = mesh.solutionDict().subDict("solverControls");

scalar kox_MIEC_Gas        (readScalar(solverControls.lookup("kox_MIEC_Gas")));
scalar kred_MIEC_Gas       (readScalar(solverControls.lookup("kred_MIEC_Gas")));
scalar kox_MIEC_Gas_2      (readScalar(solverControls.lookup("kox_MIEC_Gas_2")));
scalar kred_MIEC_Gas_2     (readScalar(solverControls.lookup("kred_MIEC_Gas_2")));
scalar kox_MIEC_Gas_2_1    (readScalar(solverControls.lookup("kox_MIEC_Gas_2_1")));
scalar kred_MIEC_Gas_2_1   (readScalar(solverControls.lookup("kred_MIEC_Gas_2_1")));
scalar kox_MIEC_Gas_2_2    (readScalar(solverControls.lookup("kox_MIEC_Gas_2_2")));
scalar kred_MIEC_Gas_2_2   (readScalar(solverControls.lookup("kred_MIEC_Gas_2_2")));
scalar kox_MIEC_Gas_2_3    (readScalar(solverControls.lookup("kox_MIEC_Gas_2_3")));
scalar kred_MIEC_Gas_2_3   (readScalar(solverControls.lookup("kred_MIEC_Gas_2_3")));
scalar kdes                (readScalar(solverControls.lookup("kdes")));
scalar kads                (readScalar(solverControls.lookup("kads")));
scalar kdes_phys           (readScalar(solverControls.lookup("kdes_phys")));
scalar kads_phys           (readScalar(solverControls.lookup("kads_phys")));
scalar F                   (readScalar(solverControls.lookup("F")));
scalar T                   (readScalar(solverControls.lookup("T")));
scalar R                   (readScalar(solverControls.lookup("R")));
scalar C_omax              (readScalar(solverControls.lookup("C_omax")));
scalar C_omax_suf          (readScalar(solverControls.lookup("C_omax_suf")));
scalar D_v_ref             (readScalar(solverControls.lookup("D_v_ref"))); 
scalar var_energy          (readScalar(solverControls.lookup("var_energy"))); 
scalar var_diff            (readScalar(solverControls.lookup("var_diff"))); 
scalar var_k               (readScalar(solverControls.lookup("var_k"))); 
scalar time_vsuf           (readScalar(solverControls.lookup("time_vsuf"))); 
scalar time_o2suf          (readScalar(solverControls.lookup("time_o2suf"))); 
scalar over_p              (readScalar(solverControls.lookup("over_p"))); 
scalar over_ratio          (readScalar(solverControls.lookup("over_ratio"))); 
scalar alpha_surf          (readScalar(solverControls.lookup("alpha_surf"))); 
scalar per_surf            (readScalar(solverControls.lookup("per_surf"))); 