# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\Gemma\Desktop\PSoC\GemmaQ_Assignment5_PSoC5OneWire\GemmaQ_Assignment5_PSoC5OneWire.cydsn\GemmaQ_Assignment5_PSoC5OneWire.cyprj
# Date: Mon, 01 Apr 2024 14:22:07 GMT
#set_units -time ns
create_clock -name {ADC_DelSig_Ext_CP_Clk(routed)} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/dclk_0}]]
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 333.33333333333331 -waveform {0 166.666666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_clock -name {ADC_DelSig_Ext_CP_Clk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {UART_IntClock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 27 53} -nominal_period 1083.3333333333333 [list [get_pins {ClockBlock/dclk_glb_1}]]
create_generated_clock -name {ADC_DelSig_theACLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 189 377} [list [get_pins {ClockBlock/aclk_glb_0}]]

set_false_path -from [get_pins {__ONE__/q}]

# Component constraints for C:\Users\Gemma\Desktop\PSoC\GemmaQ_Assignment5_PSoC5OneWire\GemmaQ_Assignment5_PSoC5OneWire.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\Gemma\Desktop\PSoC\GemmaQ_Assignment5_PSoC5OneWire\GemmaQ_Assignment5_PSoC5OneWire.cydsn\GemmaQ_Assignment5_PSoC5OneWire.cyprj
# Date: Mon, 01 Apr 2024 14:22:04 GMT
