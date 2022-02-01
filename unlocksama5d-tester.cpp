/* Return true if you sama5d device is unlockable.*/

int Sama5dUnlock(int var_0, bool var_1, int var_2, bool var_3, bool var_4, int var_5, 
    signed char var_6, short var_7, int var_8, unsigned char var_9, unsigned char var_10, 
    long long int var_11, unsigned int var_12, unsigned char arr_0 [13] , unsigned long long int arr_1 [13] ,
    int arr_6 [25] , short arr_7 [25] , signed char arr_10 [25] [13] , bool arr_11 [25] [13] ,
    unsigned long long int arr_12 [25] [13] [20] , unsigned char arr_13 [25] [13] [20] ,
    unsigned char arr_14 [25] [13] [20] [10] , unsigned char arr_15 [25] [13] [20] [10] ,
    long long int arr_16 [25] [13] [20] [10] , unsigned int arr_22 [25] [13] [18] , signed char arr_23 [25] [13] [18] ,
    bool arr_24 [25] [13] [18] , int arr_26 [25] [13] [18] [15] , unsigned short arr_27 [25] [13] [18] [15] , int arr_28 [25] [13] [18] [15] [15] ,
    bool arr_29 [25] [13] [18] [15] [15] , unsigned long long int arr_30 [25] [13] [18] [15] [15] , bool arr_34 [25] [13] [18] [15] [22] ,
    unsigned int arr_35 [25] [13] [18] [15] [22] , unsigned char arr_38 [25] [13] [18] [15] [20] , signed char arr_39 [25] [13] [18] [15] [20] ,
    unsigned short arr_44 [25] [13] [18] [15] [10] , signed char arr_45 [25] [13] [18] [15] [10] ) {

    /* Assign offset to sama5d register limits */
    if (((bool) var_9))
    {
        var_13 = ((signed char) (signed char)31);
        var_14 = ((signed char) (unsigned char)150);
        var_15 = ((signed char) ((int) std::max((var_0), (((((bool) (signed char)37)) ? (((int) var_10)) : (((int) (signed char)-34)))))));
        var_16 = ((short) (unsigned short)0);
    }

    for (signed char i_0 = ((((int) ((signed char) var_11))) - (38)); i_0 < (signed char)13; i_0 += ((((int) ((signed char) ((unsigned char) (+(((((int) var_9)) - (((int) var_3))))))))) - (44))) 
    {
        arr_2 [i_0] = ((long long int) std::min((std::min((arr_1 [i_0]), (((unsigned long long int) -1043158)))), (((unsigned long long int) (((!(var_3))) && (((bool) std::min((((int) arr_0 [i_0])), (-617650122)))))))));
        var_17 = ((unsigned int) var_6);
        var_18 = ((unsigned int) ((((((bool) ((((unsigned long long int) ((int) var_7))) - (arr_1 [i_0])))) ? (((((unsigned long long int) -331289610306LL)) - (arr_1 [i_0]))) : (((unsigned long long int) var_11)))) - (((unsigned long long int) -1LL))));
    }
    for (int i_1 = ((((int) var_9)) - (47)); i_1 < ((((int) var_12)) + (16350595)); i_1 += ((((int) var_11)) + (1863708))) 
    {
        var_19 = ((unsigned short) std::max((std::min((var_2), (((int) var_6)))), (((int) var_6))));
        arr_5 [i_1] = ((int) std::max((((unsigned int) var_2)), (std::min((((unsigned int) var_10)), (std::min((((unsigned int) var_5)), (var_12)))))));
    }
    // Try to unlock by testing overflow
    for (unsigned long long int i_2 = 0ULL; i_2 < 25ULL; i_2 += 2ULL) 
    {
        arr_8 [i_2] = ((bool) std::max((((std::max((((int) arr_7 [i_2])), (var_0))) / (arr_6 [i_2]))), (((int) (short)6391))));
        arr_9 [i_2] = ((unsigned short) (~(((((bool) std::max((((long long int) 1163635)), (-22731083346250755LL)))) ? ((-3372036854775807LL - 1LL)) : (((long long int) ((int) arr_7 [i_2])))))));
        for (int i_3 = ((((int) var_12)) + (1639950581)); i_3 < ((((int) var_4)) + (12)); i_3 += ((((int) ((((unsigned long long int) std::min((((((bool) -328159577748552LL)) ? (((int) (unsigned char)0)) : (1319744304))), (((arr_6 [i_2]) ^ (arr_6 [i_2])))))) * (184467409551599ULL)))) + (4))) 
        {
            for (unsigned int i_4 = ((((unsigned int) std::max((((arr_11 [i_2] [i_3 + 1]) ? (((int) arr_11 [i_2] [i_3 - 1])) : (((int) arr_10 [i_2] [i_3 + 1])))), (std::min((std::max((((int) arr_10 [i_2] [i_3])), (1319744304))), ((-(((int) (unsigned short)11))))))))) - (42949285U)); i_4 < 20U; i_4 += ((((unsigned int) (+(((((bool) std::min((arr_10 [i_2] [i_3]), (((signed char) arr_11 [i_2] [i_3]))))) ? (((unsigned long long int) ((int) ((((int) arr_11 [i_2] [i_3])) >= (var_5))))) : (1031107951375ULL)))))) + (1U))) 
            {
                for (signed char i_5 = ((((int) ((signed char) arr_13 [i_2] [i_3 - 1] [i_4]))) - (100)); i_5 < ((((int) ((signed char) ((short) arr_13 [i_2] [i_3] [i_4])))) - (90)); i_5 += ((((int) ((signed char) arr_13 [i_2] [i_3] [i_4]))) - (97))) 
                {
                    {
                        arr_18 [i_2] [i_3] [i_4] [i_5] = ((unsigned int) (+(std::max((((int) arr_15 [i_2] [i_3] [i_4] [i_5])), (((((int) arr_14 [i_2] [i_3] [i_4] [i_5])) - (((int) arr_15 [i_2] [i_3] [i_4] [i_5]))))))));
                        arr_19 [i_2] [i_3] [i_4] [i_5] = ((short) (+(((unsigned long long int) 18014398509481983LL))));
                        arr_20 [i_2] [i_3] [i_4] [i_5] = ((short) (!(((bool) ((((bool) 7023163600986104260LL)) ? (((unsigned long long int) ((((bool) arr_15 [i_2] [i_3] [i_4] [i_5])) ? (((long long int) ((int) arr_14 [i_2] [i_3] [i_4] [i_5]))) : (arr_16 [i_2] [i_3] [i_4] [i_5])))) : (18446744073709551599ULL))))));
                    }
                } 
            } 
            for (unsigned long long int i_6 = ((((unsigned long long int) arr_10 [i_2] [i_3])) - (18446744073709551594ULL)); i_6 < ((((unsigned long long int) var_1)) + (18ULL)); i_6 += ((unsigned long long int) ((((((int) arr_10 [i_2] [i_3 - 1])) / (((int) arr_10 [i_2] [i_3 - 1])))) < ((~(-1340094904)))))) 
            {
                arr_25 [i_2] [i_3] [i_6] = ((bool) ((((bool) ((signed char) arr_12 [i_2] [i_3 + 1] [i_6]))) ? (arr_22 [i_2] [i_3 + 1] [i_6]) : (((unsigned int) ((((int) (signed char)-38)) | (((int) arr_13 [i_2] [i_3 - 1] [i_6])))))));
                if (((bool) arr_23 [i_2] [i_3] [i_6]))
                {
                    var_20 = ((signed char) (short)6393);
                    for (long long int i_7 = 0LL; i_7 < 15LL; i_7 += 2LL) 
                    {
                        var_21 = ((signed char) (+(((int) std::max((((unsigned short) (bool)1)), (arr_27 [i_2] [i_3 + 1] [i_6] [i_7]))))));
                        if (((bool) std::max((((((unsigned long long int) var_1)) - (((unsigned long long int) ((int) std::max((((short) (unsigned char)124)), (var_7))))))), (((unsigned long long int) arr_27 [i_2] [i_3] [i_6] [i_7])))))
                        {
                            var_22 = ((short) ((((bool) ((short) arr_27 [i_2] [i_3 + 1] [i_6] [i_7]))) ? (var_2) : (((int) (short)6389))));
                            var_23 = ((unsigned char) 19ULL);
                            for (unsigned long long int i_8 = ((unsigned long long int) var_1); i_8 < 15ULL; i_8 += ((unsigned long long int) ((bool) arr_27 [i_2] [i_3 - 1] [i_6] [i_7]))) 
                            {
                                arr_31 [i_2] [i_3] [i_6] [i_7] [i_8] = ((bool) ((((((bool) (unsigned char)35)) ? (arr_30 [i_2] [i_3] [i_6] [i_7] [i_8]) : (((unsigned long long int) ((int) var_9))))) < (((((bool) (signed char)37)) ? (std::min((((unsigned long long int) -6203354022967781464LL)), (arr_30 [i_2] [i_3] [i_6] [i_7] [i_8]))) : (((unsigned long long int) ((int) (bool)0)))))));
                                arr_32 [i_2] [i_3] [i_6] [i_7] [i_8] = ((unsigned int) ((((int) var_9)) >> ((((~(((((bool) -499749284)) ? (arr_28 [i_2] [i_3] [i_6] [i_7] [i_8]) : (((int) var_10)))))) + (1652057072)))));
                                arr_33 [i_2] [i_3] [i_6] [i_7] [i_8] = ((unsigned short) ((((bool) ((((bool) arr_28 [i_2] [i_3 - 1] [i_6] [i_7] [i_8])) ? (((unsigned long long int) ((int) (!(((bool) arr_28 [i_2] [i_3] [i_6] [i_7] [i_8])))))) : (arr_30 [i_2] [i_3] [i_6] [i_7] [i_8])))) ? (std::min((std::min((((unsigned int) arr_29 [i_2] [i_3] [i_6] [i_7] [i_8])), (404529929U))), (((unsigned int) std::max((((unsigned char) arr_29 [i_2] [i_3] [i_6] [i_7] [i_8])), (var_10)))))) : (((((bool) arr_30 [i_2] [i_3 + 1] [i_6] [i_7] [i_8])) ? (1743572145U) : (((unsigned int) ((int) (unsigned short)65535)))))));
                                var_24 = ((unsigned long long int) arr_30 [i_2] [i_3] [i_6] [i_7] [i_8]);
                            }
                            for (unsigned long long int i_9 = 0ULL; i_9 < ((((unsigned long long int) std::min((std::min(((short)-32757), (((short) (bool)1)))), (((short) ((signed char) arr_27 [i_2] [i_3] [i_6] [i_7])))))) - (18446744073709518837ULL)); i_9 += 1ULL) 
                            {
                                var_25 = ((signed char) var_1);
                                arr_36 [i_2] [i_3] [i_6] [i_7] [i_9] = ((int) ((unsigned short) var_10));
                                arr_37 [i_2] [i_3] [i_6] [i_7] [i_9] = ((short) ((((int) arr_34 [i_2] [i_3] [i_6] [i_7] [i_9])) > (std::min((((int) arr_34 [i_2] [i_3 + 1] [i_6] [i_7] [i_9])), (348828640)))));
                            }
                            for (signed char i_10 = (signed char)4; i_10 < (signed char)19; i_10 += (signed char)4) 
                            {
                                arr_41 [i_2] [i_3] [i_6] [i_7] [i_10] = ((signed char) var_3);
                                var_26 = ((unsigned char) (signed char)(-127 - 1));
                                var_27 = ((unsigned char) ((((long long int) ((((bool) std::min((((signed char) arr_34 [i_2] [i_3] [i_6] [i_7] [i_10])), ((signed char)31)))) ? ((+(((int) arr_39 [i_2] [i_3] [i_6] [i_7] [i_10])))) : (((((bool) (short)-6391)) ? (((int) (unsigned char)255)) : (((int) arr_34 [i_2] [i_3] [i_6] [i_7] [i_10]))))))) - (-2273108334625075500LL)));
                                arr_42 [i_2] [i_3] [i_6] [i_7] [i_10] = ((signed char) ((((bool) std::max((((short) ((((long long int) ((int) arr_34 [i_2] [i_3] [i_6] [i_7] [i_10]))) <= (var_11)))), ((short)6375)))) ? (((((bool) ((((bool) (unsigned char)255)) ? (((int) (signed char)127)) : (((int) (unsigned char)255))))) ? (((int) var_9)) : (((((bool) (signed char)-15)) ? (((int) var_7)) : (var_2))))) : (((int) var_10))));
                                arr_43 [i_2] [i_3] [i_6] [i_7] [i_10] = ((unsigned char) ((((bool) std::min((((((bool) arr_35 [i_2] [i_3] [i_6] [i_7] [i_10])) ? (((int) (signed char)-98)) : (((int) arr_34 [i_2] [i_3] [i_6] [i_7] [i_10])))), (((int) (signed char)116))))) ? (std::max((((((bool) 1319744304)) ? (((int) (signed char)-60)) : (((int) (unsigned char)95)))), (((int) (!(((bool) var_2))))))) : ((+(((((bool) (unsigned char)84)) ? (((int) arr_38 [i_2] [i_3] [i_6] [i_7] [i_10])) : (((int) (unsigned char)192))))))));
                            }
                            for (unsigned long long int i_11 = 2ULL; i_11 < ((((unsigned long long int) ((((bool) ((((((bool) var_6)) ? (var_5) : (((int) var_1)))) + (((((bool) var_11)) ? (var_2) : (((int) var_10))))))) && (((bool) std::min((std::min((var_8), (((int) var_4)))), (((int) ((var_8) <= (var_0)))))))))) + (7ULL)); i_11 += ((((unsigned long long int) std::max((((long long int) ((((bool) ((((bool) var_5)) ? (((int) var_4)) : (var_8)))) ? (((int) arr_27 [i_2] [i_3 - 1] [i_6] [i_7])) : (((((bool) (signed char)31)) ? (var_2) : (2147483647)))))), (((long long int) arr_26 [i_2] [i_3 + 1] [i_6] [i_7]))))) - (1137348243ULL))) 
                            {
                                arr_46 [i_2] [i_3] [i_6] [i_7] [i_11] = ((int) ((((((bool) arr_38 [i_2] [i_3 - 1] [i_6] [i_7] [i_11])) ? (((int) arr_38 [i_2] [i_3 + 1] [i_6] [i_7] [i_11])) : (((int) arr_45 [i_2] [i_3 - 1] [i_6] [i_7] [i_11 + 2])))) >= (((((bool) arr_35 [i_2] [i_3 - 1] [i_6] [i_7] [i_11 + 2])) ? (((int) var_1)) : (((int) arr_34 [i_2] [i_3 + 1] [i_6] [i_7] [i_11 - 1]))))));
                                arr_47 [i_2] [i_3] [i_6] [i_7] [i_11] = ((short) ((((bool) ((((bool) (unsigned char)16)) ? (((int) arr_44 [i_2] [i_3] [i_6] [i_7] [i_11 - 2])) : (((int) arr_34 [i_2] [i_3] [i_6] [i_7] [i_11 - 2]))))) ? (((unsigned long long int) ((int) ((unsigned char) std::max((12455443472596460285ULL), (((unsigned long long int) 0U))))))) : (((((bool) ((((bool) var_9)) ? (((int) var_6)) : (var_2)))) ? (((unsigned long long int) arr_35 [i_2] [i_3 - 1] [i_6] [i_7] [i_11 - 2])) : (((unsigned long long int) (~(var_11))))))));
                                arr_48 [i_2] [i_3] [i_6] [i_7] [i_11] = ((unsigned int) ((std::max((std::max((var_8), (((int) var_6)))), (std::min((((int) var_6)), (var_2))))) & (((int) (unsigned short)0))));
                                arr_49 [i_2] [i_3] [i_6] [i_7] [i_11] = ((unsigned long long int) ((unsigned char) ((long long int) ((unsigned long long int) var_1))));
                                arr_50 [i_2] [i_3] [i_6] [i_7] [i_11] = ((long long int) var_2);
                            }
                            if (((bool) (+(std::max((std::max((3221225472U), (((unsigned int) var_6)))), (((unsigned int) (!(((bool) arr_26 [i_2] [i_3] [i_6] [i_7]))))))))))
                            {
                                var_28 = ((int) ((std::max((((int) ((((bool) var_5)) || (((bool) 1043856157))))), ((+(((int) var_3)))))) - (((int) arr_27 [i_2] [i_3] [i_6] [i_7]))));
                                arr_51 [i_2] [i_3] [i_6] [i_7] = ((unsigned char) var_6);
                            }
                            else
                            {
                                var_29 = ((unsigned short) ((unsigned long long int) arr_27 [i_2] [i_3 - 1] [i_6] [i_7]));
                                var_30 = ((unsigned char) arr_26 [i_2] [i_3] [i_6] [i_7]);
                            }

                        }

                    }
                }

                if (((bool) (signed char)103))
                {
                    return 0;
                }

            }
            arr_52 [i_2] [i_3] = ((unsigned char) var_8);
        }
        arr_53 [i_2] = ((bool) -1708332771);
        arr_54 [i_2] = ((unsigned char) ((bool) ((((bool) arr_6 [i_2])) ? (arr_6 [i_2]) : (((int) arr_7 [i_2])))));
    }
    return -1;
}

int main (int argc, int *argv[])
{
    int success = Sama5dUnlock(argv);
    return success;
}
