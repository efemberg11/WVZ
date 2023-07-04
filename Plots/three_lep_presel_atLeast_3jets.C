void three_lep_presel_atLeast_3jets()
{
//=========Macro generated from canvas: c_three_lep_presel_atLeast_3jets/c_three_lep_presel_atLeast_3jets
//=========  (Mon Feb 20 11:58:10 2023) by ROOT version6.10/06
   TCanvas *c_three_lep_presel_atLeast_3jets = new TCanvas("c_three_lep_presel_atLeast_3jets", "c_three_lep_presel_atLeast_3jets",0,0,700,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_three_lep_presel_atLeast_3jets->SetHighLightColor(2);
   c_three_lep_presel_atLeast_3jets->Range(0,0,1,1);
   c_three_lep_presel_atLeast_3jets->SetFillColor(0);
   c_three_lep_presel_atLeast_3jets->SetBorderMode(0);
   c_three_lep_presel_atLeast_3jets->SetBorderSize(2);
   c_three_lep_presel_atLeast_3jets->SetTickx(1);
   c_three_lep_presel_atLeast_3jets->SetTicky(1);
   c_three_lep_presel_atLeast_3jets->SetLeftMargin(0.16);
   c_three_lep_presel_atLeast_3jets->SetRightMargin(0.05);
   c_three_lep_presel_atLeast_3jets->SetTopMargin(0.05);
   c_three_lep_presel_atLeast_3jets->SetBottomMargin(0.16);
   c_three_lep_presel_atLeast_3jets->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.27);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.286689,0.08852468,1.102389,1.4);
   pad1->SetFillColor(0);
   pad1->SetFillStyle(4000);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(0);
   pad1->SetTickx(1);
   pad1->SetTicky(1);
   pad1->SetLeftMargin(0.12);
   pad1->SetRightMargin(0.04285714);
   pad1->SetTopMargin(0);
   pad1->SetBottomMargin(0.39);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   Double_t xAxis27[14] = {-1, -0.4, -0.3234, -0.2492, -0.1866, -0.1288, -0.0724, -0.014, 0.0474, 0.1098, 0.1732, 0.2438, 0.3262, 1}; 
   
   TH1D *h_dummy2__9 = new TH1D("h_dummy2__9","h",13, xAxis27);
   h_dummy2__9->SetMinimum(0.6);
   h_dummy2__9->SetMaximum(1.4);
   h_dummy2__9->SetEntries(792989);
   h_dummy2__9->SetDirectory(0);
   h_dummy2__9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff00");
   h_dummy2__9->SetFillColor(ci);
   h_dummy2__9->SetMarkerStyle(20);
   h_dummy2__9->SetMarkerSize(1.2);
   h_dummy2__9->GetXaxis()->SetTitle("BDT response");
   h_dummy2__9->GetXaxis()->SetLabelFont(43);
   h_dummy2__9->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__9->GetXaxis()->SetLabelSize(28);
   h_dummy2__9->GetXaxis()->SetTitleSize(28);
   h_dummy2__9->GetXaxis()->SetTickLength(0.06);
   h_dummy2__9->GetXaxis()->SetTitleOffset(4.3);
   h_dummy2__9->GetXaxis()->SetTitleFont(43);
   h_dummy2__9->GetYaxis()->SetTitle("Data / Pred.");
   h_dummy2__9->GetYaxis()->SetNdivisions(-204);
   h_dummy2__9->GetYaxis()->SetLabelFont(43);
   h_dummy2__9->GetYaxis()->SetLabelSize(28);
   h_dummy2__9->GetYaxis()->SetTitleSize(28);
   h_dummy2__9->GetYaxis()->SetTitleOffset(1.448276);
   h_dummy2__9->GetYaxis()->SetTitleFont(43);
   h_dummy2__9->GetZaxis()->SetLabelFont(43);
   h_dummy2__9->GetZaxis()->SetLabelSize(21);
   h_dummy2__9->GetZaxis()->SetTitleSize(21);
   h_dummy2__9->GetZaxis()->SetTitleFont(43);
   h_dummy2__9->Draw("HIST");
   TLine *line = new TLine(-1,1,1,1);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3009[13] = {
   -0.7,
   -0.3617,
   -0.2863,
   -0.2179,
   -0.1577,
   -0.1006,
   -0.0432,
   0.0167,
   0.0786,
   0.1415,
   0.2085,
   0.285,
   0.6631};
   Double_t g_ratio2_fy3009[13] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3009[13] = {
   0.3,
   0.0383,
   0.0371,
   0.0313,
   0.0289,
   0.0282,
   0.0292,
   0.0307,
   0.0312,
   0.0317,
   0.0353,
   0.0412,
   0.3369};
   Double_t g_ratio2_fely3009[13] = {
   0.2523105,
   0.2223703,
   0.2281057,
   0.2278478,
   0.2214956,
   0.220601,
   0.2283473,
   0.22073,
   0.2222858,
   0.2202413,
   0.2171649,
   0.2163989,
   0.2106164};
   Double_t g_ratio2_fehx3009[13] = {
   0.3,
   0.0383,
   0.0371,
   0.0313,
   0.0289,
   0.0282,
   0.0292,
   0.0307,
   0.0312,
   0.0317,
   0.0353,
   0.0412,
   0.3369};
   Double_t g_ratio2_fehy3009[13] = {
   0.2523105,
   0.2223703,
   0.2281057,
   0.2278478,
   0.2214956,
   0.220601,
   0.2283473,
   0.22073,
   0.2222858,
   0.2202413,
   0.2171649,
   0.2163989,
   0.2106164};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(13,g_ratio2_fx3009,g_ratio2_fy3009,g_ratio2_felx3009,g_ratio2_fehx3009,g_ratio2_fely3009,g_ratio2_fehy3009);
   grae->SetName("g_ratio2");
   grae->SetTitle("h");
   grae->SetFillColor(1);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_ratio23009 = new TH1F("Graph_g_ratio23009","h",100,-1.2,1.2);
   Graph_g_ratio23009->SetMinimum(0.6972274);
   Graph_g_ratio23009->SetMaximum(1.302773);
   Graph_g_ratio23009->SetDirectory(0);
   Graph_g_ratio23009->SetStats(0);
   Graph_g_ratio23009->SetLineWidth(2);
   Graph_g_ratio23009->SetMarkerStyle(20);
   Graph_g_ratio23009->SetMarkerSize(1.2);
   Graph_g_ratio23009->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23009->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23009->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23009->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23009->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23009->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23009->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23009->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23009->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23009->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23009->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23009->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23009->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23009->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23009);
   
   grae->Draw("e2");
   
   Double_t Graph_from_h_ratio_fx3010[13] = {
   -0.7,
   -0.3617,
   -0.2863,
   -0.2179,
   -0.1577,
   -0.1006,
   -0.0432,
   0.0167,
   0.0786,
   0.1415,
   0.2085,
   0.285,
   0.6631};
   Double_t Graph_from_h_ratio_fy3010[13] = {
   0.960466,
   0.9522974,
   1.055659,
   0.9785533,
   0.9263035,
   0.8959099,
   0.8796563,
   0.8046452,
   0.876431,
   0.9321211,
   0.9334417,
   0.8587097,
   0.9875454};
   Double_t Graph_from_h_ratio_felx3010[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_h_ratio_fely3010[13] = {
   0.1106572,
   0.08506194,
   0.08018257,
   0.07564681,
   0.07505037,
   0.07535962,
   0.07764964,
   0.07460155,
   0.08196467,
   0.08794543,
   0.09094923,
   0.09241659,
   0.1115772};
   Double_t Graph_from_h_ratio_fehx3010[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_h_ratio_fehy3010[13] = {
   0.1242044,
   0.09302169,
   0.08651702,
   0.08173353,
   0.08139207,
   0.08198164,
   0.08482625,
   0.08186081,
   0.09001341,
   0.09666193,
   0.1002738,
   0.1029411,
   0.1249564};
   grae = new TGraphAsymmErrors(13,Graph_from_h_ratio_fx3010,Graph_from_h_ratio_fy3010,Graph_from_h_ratio_felx3010,Graph_from_h_ratio_fehx3010,Graph_from_h_ratio_fely3010,Graph_from_h_ratio_fehy3010);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("h");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3010 = new TH1F("Graph_Graph_from_h_ratio3010","h",100,-0.83631,0.79941);
   Graph_Graph_from_h_ratio3010->SetMinimum(0.6888304);
   Graph_Graph_from_h_ratio3010->SetMaximum(1.183389);
   Graph_Graph_from_h_ratio3010->SetDirectory(0);
   Graph_Graph_from_h_ratio3010->SetStats(0);
   Graph_Graph_from_h_ratio3010->SetLineWidth(2);
   Graph_Graph_from_h_ratio3010->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3010->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3010->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3010->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3010->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3010->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3010->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3010->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3010->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3010->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3010->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3010->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3010->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3010->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3010->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3010->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3010);
   
   grae->Draw("pe0");
   Double_t xAxis28[14] = {-1, -0.4, -0.3234, -0.2492, -0.1866, -0.1288, -0.0724, -0.014, 0.0474, 0.1098, 0.1732, 0.2438, 0.3262, 1}; 
   
   TH1D *h_dummy2_copy__10 = new TH1D("h_dummy2_copy__10","h",13, xAxis28);
   h_dummy2_copy__10->SetMinimum(0.6);
   h_dummy2_copy__10->SetMaximum(1.4);
   h_dummy2_copy__10->SetEntries(792989);
   h_dummy2_copy__10->SetDirectory(0);
   h_dummy2_copy__10->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_dummy2_copy__10->SetFillColor(ci);
   h_dummy2_copy__10->SetMarkerStyle(20);
   h_dummy2_copy__10->SetMarkerSize(1.2);
   h_dummy2_copy__10->GetXaxis()->SetTitle("BDT response");
   h_dummy2_copy__10->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__10->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__10->GetXaxis()->SetLabelSize(28);
   h_dummy2_copy__10->GetXaxis()->SetTitleSize(28);
   h_dummy2_copy__10->GetXaxis()->SetTickLength(0.06);
   h_dummy2_copy__10->GetXaxis()->SetTitleOffset(4.3);
   h_dummy2_copy__10->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__10->GetYaxis()->SetTitle("Data / Pred.");
   h_dummy2_copy__10->GetYaxis()->SetNdivisions(-204);
   h_dummy2_copy__10->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__10->GetYaxis()->SetLabelSize(28);
   h_dummy2_copy__10->GetYaxis()->SetTitleSize(28);
   h_dummy2_copy__10->GetYaxis()->SetTitleOffset(1.448276);
   h_dummy2_copy__10->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__10->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__10->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__10->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__10->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__10->Draw("sameaxis");
   TLatex *   tex = new TLatex(0.15,0.9,"");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.1);
   tex->SetLineWidth(2);
   tex->Draw();
   pad1->Modified();
   c_three_lep_presel_atLeast_3jets->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.21,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-1.286689,-35.29412,1.102389,317.6471);
   pad0->SetFillColor(0);
   pad0->SetFillStyle(4000);
   pad0->SetBorderMode(0);
   pad0->SetBorderSize(0);
   pad0->SetTickx(1);
   pad0->SetTicky(1);
   pad0->SetLeftMargin(0.12);
   pad0->SetRightMargin(0.04285714);
   pad0->SetTopMargin(0.05);
   pad0->SetFrameBorderMode(0);
   pad0->SetFrameBorderMode(0);
   Double_t xAxis29[14] = {-1, -0.4, -0.3234, -0.2492, -0.1866, -0.1288, -0.0724, -0.014, 0.0474, 0.1098, 0.1732, 0.2438, 0.3262, 1}; 
   
   TH1D *h_dummy__11 = new TH1D("h_dummy__11","h",13, xAxis29);
   h_dummy__11->SetMinimum(0);
   h_dummy__11->SetMaximum(300);
   h_dummy__11->SetEntries(792989);
   h_dummy__11->SetDirectory(0);
   h_dummy__11->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_dummy__11->SetFillColor(ci);
   h_dummy__11->SetMarkerStyle(20);
   h_dummy__11->SetMarkerSize(1.2);
   h_dummy__11->GetXaxis()->SetLabelFont(43);
   h_dummy__11->GetXaxis()->SetLabelSize(0);
   h_dummy__11->GetXaxis()->SetTitleSize(28);
   h_dummy__11->GetXaxis()->SetTickLength(0.02);
   h_dummy__11->GetXaxis()->SetTitleOffset(2);
   h_dummy__11->GetXaxis()->SetTitleFont(43);
   h_dummy__11->GetYaxis()->SetTitle("Events");
   h_dummy__11->GetYaxis()->SetLabelFont(43);
   h_dummy__11->GetYaxis()->SetLabelSize(28);
   h_dummy__11->GetYaxis()->SetTitleSize(28);
   h_dummy__11->GetYaxis()->SetTickLength(0.02);
   h_dummy__11->GetYaxis()->SetTitleOffset(1.448276);
   h_dummy__11->GetYaxis()->SetTitleFont(43);
   h_dummy__11->GetZaxis()->SetLabelFont(43);
   h_dummy__11->GetZaxis()->SetLabelSize(21);
   h_dummy__11->GetZaxis()->SetTitleSize(21);
   h_dummy__11->GetZaxis()->SetTitleFont(43);
   h_dummy__11->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis30[14] = {-1, -0.4, -0.3234, -0.2492, -0.1866, -0.1288, -0.0724, -0.014, 0.0474, 0.1098, 0.1732, 0.2438, 0.3262, 1}; 
   
   TH1F *h_stack_stack_3 = new TH1F("h_stack_stack_3","h_stack",13, xAxis30);
   h_stack_stack_3->SetMinimum(-0.3450409);
   h_stack_stack_3->SetMaximum(179.1931);
   h_stack_stack_3->SetDirectory(0);
   h_stack_stack_3->SetStats(0);
   h_stack_stack_3->SetLineWidth(2);
   h_stack_stack_3->SetMarkerStyle(20);
   h_stack_stack_3->SetMarkerSize(1.2);
   h_stack_stack_3->GetXaxis()->SetLabelFont(43);
   h_stack_stack_3->GetXaxis()->SetLabelSize(21);
   h_stack_stack_3->GetXaxis()->SetTitleSize(21);
   h_stack_stack_3->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_3->GetXaxis()->SetTitleFont(43);
   h_stack_stack_3->GetYaxis()->SetLabelFont(43);
   h_stack_stack_3->GetYaxis()->SetLabelSize(21);
   h_stack_stack_3->GetYaxis()->SetTitleSize(21);
   h_stack_stack_3->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_3->GetYaxis()->SetTitleFont(43);
   h_stack_stack_3->GetZaxis()->SetLabelFont(43);
   h_stack_stack_3->GetZaxis()->SetLabelSize(21);
   h_stack_stack_3->GetZaxis()->SetTitleSize(21);
   h_stack_stack_3->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_3);
   
   Double_t xAxis31[14] = {-1, -0.4, -0.3234, -0.2492, -0.1866, -0.1288, -0.0724, -0.014, 0.0474, 0.1098, 0.1732, 0.2438, 0.3262, 1}; 
   
   TH1D *three_lep_presel_atLeast_3jets_tWZ_stack_1 = new TH1D("three_lep_presel_atLeast_3jets_tWZ_stack_1","h",13, xAxis31);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinContent(1,0.1701516);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinContent(2,0.645431);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinContent(3,1.234956);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinContent(4,1.13597);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinContent(5,1.588243);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinContent(6,1.761584);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinContent(7,1.548863);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinContent(8,1.809177);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinContent(9,1.812506);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinContent(10,2.014512);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinContent(11,1.933592);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinContent(12,2.261402);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinContent(13,1.685133);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinError(1,0.06305969);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinError(2,0.1090587);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinError(3,0.144705);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinError(4,0.1657848);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinError(5,0.2061492);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinError(6,0.2031873);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinError(7,0.1871423);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinError(8,0.2053744);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinError(9,0.2269188);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinError(10,0.2231605);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinError(11,0.2351158);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinError(12,0.2337365);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetBinError(13,0.2473338);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetEntries(3968);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetDirectory(0);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetStats(0);

   ci = TColor::GetColor("#640169");
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetFillColor(ci);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetMarkerStyle(20);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->SetMarkerSize(1.2);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->GetXaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->GetXaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->GetXaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->GetXaxis()->SetTitleOffset(1.4);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->GetXaxis()->SetTitleFont(43);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->GetYaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->GetYaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->GetYaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->GetYaxis()->SetTitleOffset(1.4);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->GetYaxis()->SetTitleFont(43);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->GetZaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->GetZaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->GetZaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_tWZ_stack_1->GetZaxis()->SetTitleFont(43);
   h_stack->Add(three_lep_presel_atLeast_3jets_tWZ_stack_1,"");
   Double_t xAxis32[14] = {-1, -0.4, -0.3234, -0.2492, -0.1866, -0.1288, -0.0724, -0.014, 0.0474, 0.1098, 0.1732, 0.2438, 0.3262, 1}; 
   
   TH1D *three_lep_presel_atLeast_3jets_ttZ_stack_2 = new TH1D("three_lep_presel_atLeast_3jets_ttZ_stack_2","h",13, xAxis32);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinContent(1,0.5010743);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinContent(2,1.968432);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinContent(3,3.521693);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinContent(4,5.353992);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinContent(5,5.804466);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinContent(6,6.820872);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinContent(7,6.954019);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinContent(8,7.634427);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinContent(9,7.959015);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinContent(10,7.827839);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinContent(11,8.434822);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinContent(12,8.322676);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinContent(13,6.907608);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinError(1,0.05411852);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinError(2,0.1036974);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinError(3,0.1482827);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinError(4,0.1827392);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinError(5,0.1892422);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinError(6,0.2012953);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinError(7,0.2114283);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinError(8,0.2234269);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinError(9,0.2396009);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinError(10,0.2420673);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinError(11,0.249911);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinError(12,0.2511799);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetBinError(13,0.2378381);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetEntries(73866);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetDirectory(0);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetStats(0);

   ci = TColor::GetColor("#a90f23");
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetFillColor(ci);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetMarkerStyle(20);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->SetMarkerSize(1.2);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->GetXaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->GetXaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->GetXaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->GetXaxis()->SetTitleOffset(1.4);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->GetXaxis()->SetTitleFont(43);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->GetYaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->GetYaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->GetYaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->GetYaxis()->SetTitleOffset(1.4);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->GetYaxis()->SetTitleFont(43);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->GetZaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->GetZaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->GetZaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_ttZ_stack_2->GetZaxis()->SetTitleFont(43);
   h_stack->Add(three_lep_presel_atLeast_3jets_ttZ_stack_2,"");
   Double_t xAxis33[14] = {-1, -0.4, -0.3234, -0.2492, -0.1866, -0.1288, -0.0724, -0.014, 0.0474, 0.1098, 0.1732, 0.2438, 0.3262, 1}; 
   
   TH1D *three_lep_presel_atLeast_3jets_Zgamma_stack_3 = new TH1D("three_lep_presel_atLeast_3jets_Zgamma_stack_3","h",13, xAxis33);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinContent(1,0.08778438);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinContent(2,0.9172926);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinContent(3,7.972732e-07);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinContent(4,1.319965);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinContent(5,1.950858);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinContent(6,1.992954);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinContent(7,0.7446025);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinContent(8,0.2775411);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinContent(9,0.3994181);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinContent(10,0.1824247);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinContent(11,0.725785);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinContent(12,0.7401696);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinContent(13,0.3117212);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinError(1,0.07934145);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinError(2,0.9813387);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinError(3,7.972732e-07);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinError(4,1.665006);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinError(5,1.080589);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinError(6,1.629581);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinError(7,0.5077297);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinError(8,0.1388053);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinError(9,0.2120713);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinError(10,0.09459099);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinError(11,0.5097405);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinError(12,0.6983028);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetBinError(13,0.1970604);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetEntries(111);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetDirectory(0);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetStats(0);

   ci = TColor::GetColor("#24a003");
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetFillColor(ci);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetMarkerStyle(20);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->SetMarkerSize(1.2);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->GetXaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->GetXaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->GetXaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->GetXaxis()->SetTitleOffset(1.4);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->GetXaxis()->SetTitleFont(43);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->GetYaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->GetYaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->GetYaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->GetYaxis()->SetTitleOffset(1.4);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->GetYaxis()->SetTitleFont(43);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->GetZaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->GetZaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->GetZaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_Zgamma_stack_3->GetZaxis()->SetTitleFont(43);
   h_stack->Add(three_lep_presel_atLeast_3jets_Zgamma_stack_3,"");
   Double_t xAxis34[14] = {-1, -0.4, -0.3234, -0.2492, -0.1866, -0.1288, -0.0724, -0.014, 0.0474, 0.1098, 0.1732, 0.2438, 0.3262, 1}; 
   
   TH1D *three_lep_presel_atLeast_3jets_Zjets_stack_4 = new TH1D("three_lep_presel_atLeast_3jets_Zjets_stack_4","h",13, xAxis34);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinContent(1,16.12186);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinContent(2,9.390606);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinContent(3,7.794208);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinContent(4,6.25129);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinContent(5,5.051513);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinContent(6,8.544529);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinContent(7,3.400723);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinContent(8,3.399082);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinContent(9,2.415953);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinContent(10,3.463459);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinContent(11,2.501559);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinContent(12,1.758537);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinContent(13,1.184514);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinError(1,10.97257);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinError(2,1.804422);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinError(3,1.764738);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinError(4,1.617086);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinError(5,0.8324738);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinError(6,2.452657);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinError(7,0.5643358);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinError(8,0.6766299);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinError(9,1.14991);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinError(10,1.032831);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinError(11,0.4287759);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinError(12,0.2826283);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetBinError(13,0.1700384);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetEntries(1645);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetDirectory(0);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetStats(0);

   ci = TColor::GetColor("#57a1f6");
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetFillColor(ci);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetMarkerStyle(20);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->SetMarkerSize(1.2);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->GetXaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->GetXaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->GetXaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->GetXaxis()->SetTitleOffset(1.4);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->GetXaxis()->SetTitleFont(43);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->GetYaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->GetYaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->GetYaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->GetYaxis()->SetTitleOffset(1.4);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->GetYaxis()->SetTitleFont(43);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->GetZaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->GetZaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->GetZaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_Zjets_stack_4->GetZaxis()->SetTitleFont(43);
   h_stack->Add(three_lep_presel_atLeast_3jets_Zjets_stack_4,"");
   Double_t xAxis35[14] = {-1, -0.4, -0.3234, -0.2492, -0.1866, -0.1288, -0.0724, -0.014, 0.0474, 0.1098, 0.1732, 0.2438, 0.3262, 1}; 
   
   TH1D *three_lep_presel_atLeast_3jets_ZZ_stack_5 = new TH1D("three_lep_presel_atLeast_3jets_ZZ_stack_5","h",13, xAxis35);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinContent(1,5.210434);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinContent(2,9.244073);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinContent(3,11.26835);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinContent(4,10.80117);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinContent(5,9.391175);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinContent(6,7.809915);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinContent(7,7.307777);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinContent(8,7.083196);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinContent(9,5.567614);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinContent(10,5.067872);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinContent(11,4.723128);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinContent(12,3.902395);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinContent(13,3.020578);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinError(1,0.1589907);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinError(2,0.1948242);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinError(3,0.227491);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinError(4,0.205837);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinError(5,0.2039961);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinError(6,0.15681);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinError(7,0.1535793);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinError(8,0.1780697);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinError(9,0.115279);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinError(10,0.1070895);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinError(11,0.1094503);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinError(12,0.09054333);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetBinError(13,0.1039674);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetEntries(196962);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetDirectory(0);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetStats(0);

   ci = TColor::GetColor("#c48bff");
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetFillColor(ci);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetMarkerStyle(20);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->SetMarkerSize(1.2);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->GetXaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->GetXaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->GetXaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->GetXaxis()->SetTitleOffset(1.4);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->GetXaxis()->SetTitleFont(43);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->GetYaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->GetYaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->GetYaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->GetYaxis()->SetTitleOffset(1.4);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->GetYaxis()->SetTitleFont(43);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->GetZaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->GetZaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->GetZaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_ZZ_stack_5->GetZaxis()->SetTitleFont(43);
   h_stack->Add(three_lep_presel_atLeast_3jets_ZZ_stack_5,"");
   Double_t xAxis36[14] = {-1, -0.4, -0.3234, -0.2492, -0.1866, -0.1288, -0.0724, -0.014, 0.0474, 0.1098, 0.1732, 0.2438, 0.3262, 1}; 
   
   TH1D *three_lep_presel_atLeast_3jets_WZ_stack_6 = new TH1D("three_lep_presel_atLeast_3jets_WZ_stack_6","h",13, xAxis36);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinContent(1,48.85754);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinContent(2,94.94124);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinContent(3,122.0024);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinContent(4,128.0352);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinContent(5,121.2498);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinContent(6,116.0577);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinContent(7,112.5639);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinContent(8,109.6563);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinContent(9,99.57332);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinContent(10,90.612);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinContent(11,83.69587);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinContent(12,73.67932);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinContent(13,57.17198);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinError(1,0.698127);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinError(2,0.871428);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinError(3,0.9604133);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinError(4,0.9752873);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinError(5,0.9491657);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinError(6,0.8590311);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinError(7,0.8413767);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinError(8,0.8221025);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinError(9,0.7410438);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinError(10,0.7121917);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinError(11,0.6609466);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinError(12,0.6338604);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetBinError(13,0.5370371);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetEntries(464504);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetDirectory(0);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetStats(0);

   ci = TColor::GetColor("#fe9ccf");
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetFillColor(ci);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetMarkerStyle(20);
   three_lep_presel_atLeast_3jets_WZ_stack_6->SetMarkerSize(1.2);
   three_lep_presel_atLeast_3jets_WZ_stack_6->GetXaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_WZ_stack_6->GetXaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_WZ_stack_6->GetXaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_WZ_stack_6->GetXaxis()->SetTitleOffset(1.4);
   three_lep_presel_atLeast_3jets_WZ_stack_6->GetXaxis()->SetTitleFont(43);
   three_lep_presel_atLeast_3jets_WZ_stack_6->GetYaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_WZ_stack_6->GetYaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_WZ_stack_6->GetYaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_WZ_stack_6->GetYaxis()->SetTitleOffset(1.4);
   three_lep_presel_atLeast_3jets_WZ_stack_6->GetYaxis()->SetTitleFont(43);
   three_lep_presel_atLeast_3jets_WZ_stack_6->GetZaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_WZ_stack_6->GetZaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_WZ_stack_6->GetZaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_WZ_stack_6->GetZaxis()->SetTitleFont(43);
   h_stack->Add(three_lep_presel_atLeast_3jets_WZ_stack_6,"");
   Double_t xAxis37[14] = {-1, -0.4, -0.3234, -0.2492, -0.1866, -0.1288, -0.0724, -0.014, 0.0474, 0.1098, 0.1732, 0.2438, 0.3262, 1}; 
   
   TH1D *three_lep_presel_atLeast_3jets_VH_other_stack_7 = new TH1D("three_lep_presel_atLeast_3jets_VH_other_stack_7","h",13, xAxis37);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinContent(1,6.225684);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinContent(2,12.56704);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinContent(3,14.08349);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinContent(4,14.79387);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinContent(5,15.91751);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinContent(6,10.70114);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinContent(7,9.473718);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinContent(8,10.2499);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinContent(9,8.117259);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinContent(10,6.453946);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinContent(11,5.168103);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinContent(12,3.840868);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinContent(13,2.637982);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinError(1,0.9517768);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinError(2,1.413207);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinError(3,1.437612);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinError(4,1.635438);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinError(5,1.679667);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinError(6,1.308049);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinError(7,1.340047);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinError(8,1.273178);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinError(9,1.585616);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinError(10,0.967243);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinError(11,0.8982864);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinError(12,0.6914918);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetBinError(13,0.5839835);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetEntries(7368);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetDirectory(0);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetStats(0);

   ci = TColor::GetColor("#999999");
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetFillColor(ci);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetMarkerStyle(20);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->SetMarkerSize(1.2);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->GetXaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->GetXaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->GetXaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->GetXaxis()->SetTitleOffset(1.4);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->GetXaxis()->SetTitleFont(43);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->GetYaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->GetYaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->GetYaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->GetYaxis()->SetTitleOffset(1.4);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->GetYaxis()->SetTitleFont(43);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->GetZaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->GetZaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->GetZaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_VH_other_stack_7->GetZaxis()->SetTitleFont(43);
   h_stack->Add(three_lep_presel_atLeast_3jets_VH_other_stack_7,"");
   Double_t xAxis38[14] = {-1, -0.4, -0.3234, -0.2492, -0.1866, -0.1288, -0.0724, -0.014, 0.0474, 0.1098, 0.1732, 0.2438, 0.3262, 1}; 
   
   TH1D *three_lep_presel_atLeast_3jets_WVZ_stack_8 = new TH1D("three_lep_presel_atLeast_3jets_WVZ_stack_8","h",13, xAxis38);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinContent(1,0.9125679);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinContent(2,1.587404);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinContent(3,3.973631);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinContent(4,2.968613);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinContent(5,3.13951);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinContent(6,3.693223);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinContent(7,3.517787);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinContent(8,4.053319);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinContent(9,4.227902);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinContent(10,4.534019);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinContent(11,5.304083);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinContent(12,5.644894);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinContent(13,6.064195);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinError(1,0.3394239);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinError(2,0.2909198);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinError(3,0.6815453);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinError(4,0.3743881);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinError(5,0.1943829);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinError(6,0.3065027);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinError(7,0.1866954);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinError(8,0.2208549);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinError(9,0.1621899);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinError(10,0.1678171);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinError(11,0.3791523);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinError(12,0.1695591);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetBinError(13,0.1233281);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetEntries(44552);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetDirectory(0);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetFillColor(ci);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetMarkerStyle(20);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->SetMarkerSize(1.2);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->GetXaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->GetXaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->GetXaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->GetXaxis()->SetTitleOffset(1.4);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->GetXaxis()->SetTitleFont(43);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->GetYaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->GetYaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->GetYaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->GetYaxis()->SetTitleOffset(1.4);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->GetYaxis()->SetTitleFont(43);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->GetZaxis()->SetLabelFont(43);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->GetZaxis()->SetLabelSize(21);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->GetZaxis()->SetTitleSize(21);
   three_lep_presel_atLeast_3jets_WVZ_stack_8->GetZaxis()->SetTitleFont(43);
   h_stack->Add(three_lep_presel_atLeast_3jets_WVZ_stack_8,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3011[13] = {
   -0.7,
   -0.3617,
   -0.2863,
   -0.2179,
   -0.1577,
   -0.1006,
   -0.0432,
   0.0167,
   0.0786,
   0.1415,
   0.2085,
   0.285,
   0.6631};
   Double_t g_totErr_fy3011[13] = {
   78.08709,
   131.2615,
   163.8787,
   170.6601,
   164.0931,
   157.3819,
   145.5114,
   144.1629,
   130.073,
   120.1561,
   112.4869,
   100.1503,
   78.98371};
   Double_t g_totErr_felx3011[13] = {
   0.3,
   0.0383,
   0.0371,
   0.0313,
   0.0289,
   0.0282,
   0.0292,
   0.0307,
   0.0312,
   0.0317,
   0.0353,
   0.0412,
   0.3369};
   Double_t g_totErr_fely3011[13] = {
   19.70219,
   29.18867,
   37.38167,
   38.88453,
   36.34589,
   34.71861,
   33.22713,
   31.82108,
   28.91337,
   26.46333,
   24.42822,
   21.67241,
   16.63526};
   Double_t g_totErr_fehx3011[13] = {
   0.3,
   0.0383,
   0.0371,
   0.0313,
   0.0289,
   0.0282,
   0.0292,
   0.0307,
   0.0312,
   0.0317,
   0.0353,
   0.0412,
   0.3369};
   Double_t g_totErr_fehy3011[13] = {
   19.70219,
   29.18867,
   37.38167,
   38.88453,
   36.34589,
   34.71861,
   33.22713,
   31.82108,
   28.91337,
   26.46333,
   24.42822,
   21.67241,
   16.63526};
   grae = new TGraphAsymmErrors(13,g_totErr_fx3011,g_totErr_fy3011,g_totErr_felx3011,g_totErr_fehx3011,g_totErr_fely3011,g_totErr_fehy3011);
   grae->SetName("g_totErr");
   grae->SetTitle("h");
   grae->SetFillColor(1);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3011 = new TH1F("Graph_g_totErr3011","h",100,-1.2,1.2);
   Graph_g_totErr3011->SetMinimum(43.26893);
   Graph_g_totErr3011->SetMaximum(224.6606);
   Graph_g_totErr3011->SetDirectory(0);
   Graph_g_totErr3011->SetStats(0);
   Graph_g_totErr3011->SetLineWidth(2);
   Graph_g_totErr3011->SetMarkerStyle(20);
   Graph_g_totErr3011->SetMarkerSize(1.2);
   Graph_g_totErr3011->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3011->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3011->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3011->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3011->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3011->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3011->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3011->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3011->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3011->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3011->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3011->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3011->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3011->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3011);
   
   grae->Draw("e2");
   
   Double_t Graph_from_three_lep_presel_atLeast_3jets_data_fx3012[13] = {
   -0.7,
   -0.3617,
   -0.2863,
   -0.2179,
   -0.1577,
   -0.1006,
   -0.0432,
   0.0167,
   0.0786,
   0.1415,
   0.2085,
   0.285,
   0.6631};
   Double_t Graph_from_three_lep_presel_atLeast_3jets_data_fy3012[13] = {
   75,
   125,
   173,
   167,
   152,
   141,
   128,
   116,
   114,
   112,
   105,
   86,
   78};
   Double_t Graph_from_three_lep_presel_atLeast_3jets_data_felx3012[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_three_lep_presel_atLeast_3jets_data_fely3012[13] = {
   8.640895,
   11.16536,
   13.14022,
   12.90989,
   12.31525,
   11.86024,
   11.29891,
   10.75478,
   10.66139,
   10.56718,
   10.2306,
   9.255546,
   8.81278};
   Double_t Graph_from_three_lep_presel_atLeast_3jets_data_fehx3012[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_three_lep_presel_atLeast_3jets_data_fehy3012[13] = {
   9.698762,
   12.21017,
   14.1783,
   13.94865,
   13.35588,
   12.90243,
   12.34318,
   11.80129,
   11.70831,
   11.61452,
   11.2795,
   10.30958,
   9.869521};
   grae = new TGraphAsymmErrors(13,Graph_from_three_lep_presel_atLeast_3jets_data_fx3012,Graph_from_three_lep_presel_atLeast_3jets_data_fy3012,Graph_from_three_lep_presel_atLeast_3jets_data_felx3012,Graph_from_three_lep_presel_atLeast_3jets_data_fehx3012,Graph_from_three_lep_presel_atLeast_3jets_data_fely3012,Graph_from_three_lep_presel_atLeast_3jets_data_fehy3012);
   grae->SetName("Graph_from_three_lep_presel_atLeast_3jets_data");
   grae->SetTitle("h");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012 = new TH1F("Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012","h",100,-0.83631,0.79941);
   Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012->SetMinimum(54.27719);
   Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012->SetMaximum(199.2602);
   Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012->SetDirectory(0);
   Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012->SetStats(0);
   Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012->SetLineWidth(2);
   Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012->SetMarkerStyle(20);
   Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012->SetMarkerSize(1.2);
   Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_three_lep_presel_atLeast_3jets_data3012);
   
   grae->Draw("ep1 ");
   Double_t xAxis39[14] = {-1, -0.4, -0.3234, -0.2492, -0.1866, -0.1288, -0.0724, -0.014, 0.0474, 0.1098, 0.1732, 0.2438, 0.3262, 1}; 
   
   TH1D *h_dummy_copy__12 = new TH1D("h_dummy_copy__12","h",13, xAxis39);
   h_dummy_copy__12->SetEntries(792989);
   h_dummy_copy__12->SetDirectory(0);
   h_dummy_copy__12->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_dummy_copy__12->SetFillColor(ci);
   h_dummy_copy__12->SetMarkerStyle(20);
   h_dummy_copy__12->SetMarkerSize(1.2);
   h_dummy_copy__12->GetXaxis()->SetTitle("BDT response");
   h_dummy_copy__12->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__12->GetXaxis()->SetLabelSize(28);
   h_dummy_copy__12->GetXaxis()->SetTitleSize(28);
   h_dummy_copy__12->GetXaxis()->SetTickLength(0.02);
   h_dummy_copy__12->GetXaxis()->SetTitleOffset(2);
   h_dummy_copy__12->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__12->GetYaxis()->SetTitle("Events");
   h_dummy_copy__12->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__12->GetYaxis()->SetLabelSize(28);
   h_dummy_copy__12->GetYaxis()->SetTitleSize(28);
   h_dummy_copy__12->GetYaxis()->SetTickLength(0.02);
   h_dummy_copy__12->GetYaxis()->SetTitleOffset(1.448276);
   h_dummy_copy__12->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__12->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__12->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__12->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__12->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__12->Draw("sameaxis");
      tex = new TLatex(0.17,0.8649999,"ATLAS");
tex->SetNDC();
   tex->SetTextFont(73);
   tex->SetTextSize(23);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2838983,0.8649999,"#color[0]{1_Corinth_13_4}");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(23);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.17,0.8149999,"13 TeV, 79.8 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(23);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.17,0.7649999,"none");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(23);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.17,0.7149999,"WVZ\\!: 3\\ell3j");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(23);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.17,0.665,"Pre-Fit");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(23);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.53,0.6666667,0.93,0.9166667,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(23);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("three_lep_presel_atLeast_3jets_data","Data","ep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("three_lep_presel_atLeast_3jets_WVZ_stack_8","#it{WVV}","f");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("three_lep_presel_atLeast_3jets_VH_other_stack_7","Other","f");

   ci = TColor::GetColor("#999999");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("three_lep_presel_atLeast_3jets_WZ_stack_6","#it{WZ}","f");

   ci = TColor::GetColor("#fe9ccf");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("three_lep_presel_atLeast_3jets_ZZ_stack_5","#it{ZZ}","f");

   ci = TColor::GetColor("#c48bff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("three_lep_presel_atLeast_3jets_Zjets_stack_4","Non-prompt","f");

   ci = TColor::GetColor("#57a1f6");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("three_lep_presel_atLeast_3jets_Zgamma_stack_3","#gamma conv.","f");

   ci = TColor::GetColor("#24a003");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("three_lep_presel_atLeast_3jets_ttZ_stack_2","#it{t#bar{t}Z}","f");

   ci = TColor::GetColor("#a90f23");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("three_lep_presel_atLeast_3jets_tWZ_stack_1","#it{WtZ}","f");

   ci = TColor::GetColor("#640169");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("g_totErr","Total uncert.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3354);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   pad0->Modified();
   c_three_lep_presel_atLeast_3jets->cd();
   c_three_lep_presel_atLeast_3jets->Modified();
   c_three_lep_presel_atLeast_3jets->cd();
   c_three_lep_presel_atLeast_3jets->SetSelected(c_three_lep_presel_atLeast_3jets);
}
