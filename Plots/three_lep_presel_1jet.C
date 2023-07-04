void three_lep_presel_1jet()
{
//=========Macro generated from canvas: c_three_lep_presel_1jet/c_three_lep_presel_1jet
//=========  (Mon Feb 20 11:58:03 2023) by ROOT version6.10/06
   TCanvas *c_three_lep_presel_1jet = new TCanvas("c_three_lep_presel_1jet", "c_three_lep_presel_1jet",0,0,700,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_three_lep_presel_1jet->SetHighLightColor(2);
   c_three_lep_presel_1jet->Range(0,0,1,1);
   c_three_lep_presel_1jet->SetFillColor(0);
   c_three_lep_presel_1jet->SetBorderMode(0);
   c_three_lep_presel_1jet->SetBorderSize(2);
   c_three_lep_presel_1jet->SetTickx(1);
   c_three_lep_presel_1jet->SetTicky(1);
   c_three_lep_presel_1jet->SetLeftMargin(0.16);
   c_three_lep_presel_1jet->SetRightMargin(0.05);
   c_three_lep_presel_1jet->SetTopMargin(0.05);
   c_three_lep_presel_1jet->SetBottomMargin(0.16);
   c_three_lep_presel_1jet->SetFrameBorderMode(0);
  
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
   Double_t xAxis1[14] = {-1, -0.5, -0.3424, -0.2462, -0.1818, -0.1312, -0.083, -0.0356, 0.0188, 0.0836, 0.158, 0.2522, 0.3634, 1}; 
   
   TH1D *h_dummy2__1 = new TH1D("h_dummy2__1","h",13, xAxis1);
   h_dummy2__1->SetMinimum(0.6);
   h_dummy2__1->SetMaximum(1.4);
   h_dummy2__1->SetEntries(782720);
   h_dummy2__1->SetDirectory(0);
   h_dummy2__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff00");
   h_dummy2__1->SetFillColor(ci);
   h_dummy2__1->SetMarkerStyle(20);
   h_dummy2__1->SetMarkerSize(1.2);
   h_dummy2__1->GetXaxis()->SetTitle("BDT response");
   h_dummy2__1->GetXaxis()->SetLabelFont(43);
   h_dummy2__1->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__1->GetXaxis()->SetLabelSize(28);
   h_dummy2__1->GetXaxis()->SetTitleSize(28);
   h_dummy2__1->GetXaxis()->SetTickLength(0.06);
   h_dummy2__1->GetXaxis()->SetTitleOffset(4.3);
   h_dummy2__1->GetXaxis()->SetTitleFont(43);
   h_dummy2__1->GetYaxis()->SetTitle("Data / Pred.");
   h_dummy2__1->GetYaxis()->SetNdivisions(-204);
   h_dummy2__1->GetYaxis()->SetLabelFont(43);
   h_dummy2__1->GetYaxis()->SetLabelSize(28);
   h_dummy2__1->GetYaxis()->SetTitleSize(28);
   h_dummy2__1->GetYaxis()->SetTitleOffset(1.448276);
   h_dummy2__1->GetYaxis()->SetTitleFont(43);
   h_dummy2__1->GetZaxis()->SetLabelFont(43);
   h_dummy2__1->GetZaxis()->SetLabelSize(21);
   h_dummy2__1->GetZaxis()->SetTitleSize(21);
   h_dummy2__1->GetZaxis()->SetTitleFont(43);
   h_dummy2__1->Draw("HIST");
   TLine *line = new TLine(-1,1,1,1);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3001[13] = {
   -0.75,
   -0.4212,
   -0.2943,
   -0.214,
   -0.1565,
   -0.1071,
   -0.0593,
   -0.0084,
   0.0512,
   0.1208,
   0.2051,
   0.3078,
   0.6817};
   Double_t g_ratio2_fy3001[13] = {
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
   Double_t g_ratio2_felx3001[13] = {
   0.25,
   0.0788,
   0.0481,
   0.0322,
   0.0253,
   0.0241,
   0.0237,
   0.0272,
   0.0324,
   0.0372,
   0.0471,
   0.0556,
   0.3183};
   Double_t g_ratio2_fely3001[13] = {
   0.2184296,
   0.153155,
   0.1500452,
   0.1640237,
   0.1645723,
   0.1713637,
   0.1759117,
   0.1714765,
   0.1748101,
   0.1787242,
   0.1750619,
   0.1769908,
   0.1745895};
   Double_t g_ratio2_fehx3001[13] = {
   0.25,
   0.0788,
   0.0481,
   0.0322,
   0.0253,
   0.0241,
   0.0237,
   0.0272,
   0.0324,
   0.0372,
   0.0471,
   0.0556,
   0.3183};
   Double_t g_ratio2_fehy3001[13] = {
   0.2184296,
   0.153155,
   0.1500452,
   0.1640237,
   0.1645723,
   0.1713637,
   0.1759117,
   0.1714765,
   0.1748101,
   0.1787242,
   0.1750619,
   0.1769908,
   0.1745895};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(13,g_ratio2_fx3001,g_ratio2_fy3001,g_ratio2_felx3001,g_ratio2_fehx3001,g_ratio2_fely3001,g_ratio2_fehy3001);
   grae->SetName("g_ratio2");
   grae->SetTitle("h");
   grae->SetFillColor(1);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_ratio23001 = new TH1F("Graph_g_ratio23001","h",100,-1.2,1.2);
   Graph_g_ratio23001->SetMinimum(0.7378845);
   Graph_g_ratio23001->SetMaximum(1.262115);
   Graph_g_ratio23001->SetDirectory(0);
   Graph_g_ratio23001->SetStats(0);
   Graph_g_ratio23001->SetLineWidth(2);
   Graph_g_ratio23001->SetMarkerStyle(20);
   Graph_g_ratio23001->SetMarkerSize(1.2);
   Graph_g_ratio23001->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23001->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23001->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23001->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23001->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23001->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23001->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23001->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23001->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23001->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23001->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23001->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23001->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23001->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23001);
   
   grae->Draw("e2");
   
   Double_t Graph_from_h_ratio_fx3002[13] = {
   -0.75,
   -0.4212,
   -0.2943,
   -0.214,
   -0.1565,
   -0.1071,
   -0.0593,
   -0.0084,
   0.0512,
   0.1208,
   0.2051,
   0.3078,
   0.6817};
   Double_t Graph_from_h_ratio_fy3002[13] = {
   -1,
   0.874173,
   1.040725,
   0.9944311,
   0.8758118,
   0.9104092,
   0.9864823,
   0.9800007,
   0.9216908,
   0.9919488,
   1.002217,
   1.048984,
   0.8555259};
   Double_t Graph_from_h_ratio_felx3002[13] = {
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
   Double_t Graph_from_h_ratio_fely3002[13] = {
   0,
   0.05759931,
   0.05131424,
   0.04951556,
   0.04863107,
   0.05235913,
   0.05779535,
   0.05424934,
   0.05437395,
   0.05945731,
   0.06451362,
   0.07505482,
   0.1074992};
   Double_t Graph_from_h_ratio_fehx3002[13] = {
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
   Double_t Graph_from_h_ratio_fehy3002[13] = {
   0,
   0.06152556,
   0.05390894,
   0.05204467,
   0.05140938,
   0.05546058,
   0.06128482,
   0.05733884,
   0.05768033,
   0.06313263,
   0.06880633,
   0.08062716,
   0.1219364};
   grae = new TGraphAsymmErrors(13,Graph_from_h_ratio_fx3002,Graph_from_h_ratio_fy3002,Graph_from_h_ratio_felx3002,Graph_from_h_ratio_fehx3002,Graph_from_h_ratio_fely3002,Graph_from_h_ratio_fehy3002);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("h");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3002 = new TH1F("Graph_Graph_from_h_ratio3002","h",100,-0.89317,0.82487);
   Graph_Graph_from_h_ratio3002->SetMinimum(-1.212961);
   Graph_Graph_from_h_ratio3002->SetMaximum(1.342572);
   Graph_Graph_from_h_ratio3002->SetDirectory(0);
   Graph_Graph_from_h_ratio3002->SetStats(0);
   Graph_Graph_from_h_ratio3002->SetLineWidth(2);
   Graph_Graph_from_h_ratio3002->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3002->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3002->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3002->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3002->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3002->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3002->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3002->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3002->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3002->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3002->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3002->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3002->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3002->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3002->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3002->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3002);
   
   grae->Draw("pe0");
   Double_t xAxis2[14] = {-1, -0.5, -0.3424, -0.2462, -0.1818, -0.1312, -0.083, -0.0356, 0.0188, 0.0836, 0.158, 0.2522, 0.3634, 1}; 
   
   TH1D *h_dummy2_copy__2 = new TH1D("h_dummy2_copy__2","h",13, xAxis2);
   h_dummy2_copy__2->SetMinimum(0.6);
   h_dummy2_copy__2->SetMaximum(1.4);
   h_dummy2_copy__2->SetEntries(782720);
   h_dummy2_copy__2->SetDirectory(0);
   h_dummy2_copy__2->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_dummy2_copy__2->SetFillColor(ci);
   h_dummy2_copy__2->SetMarkerStyle(20);
   h_dummy2_copy__2->SetMarkerSize(1.2);
   h_dummy2_copy__2->GetXaxis()->SetTitle("BDT response");
   h_dummy2_copy__2->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__2->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__2->GetXaxis()->SetLabelSize(28);
   h_dummy2_copy__2->GetXaxis()->SetTitleSize(28);
   h_dummy2_copy__2->GetXaxis()->SetTickLength(0.06);
   h_dummy2_copy__2->GetXaxis()->SetTitleOffset(4.3);
   h_dummy2_copy__2->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__2->GetYaxis()->SetTitle("Data / Pred.");
   h_dummy2_copy__2->GetYaxis()->SetNdivisions(-204);
   h_dummy2_copy__2->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__2->GetYaxis()->SetLabelSize(28);
   h_dummy2_copy__2->GetYaxis()->SetTitleSize(28);
   h_dummy2_copy__2->GetYaxis()->SetTitleOffset(1.448276);
   h_dummy2_copy__2->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__2->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__2->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__2->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__2->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__2->Draw("sameaxis");
   TLatex *   tex = new TLatex(0.15,0.9,"");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.1);
   tex->SetLineWidth(2);
   tex->Draw();
   pad1->Modified();
   c_three_lep_presel_1jet->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.21,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-1.286689,-77.64706,1.102389,698.8235);
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
   Double_t xAxis3[14] = {-1, -0.5, -0.3424, -0.2462, -0.1818, -0.1312, -0.083, -0.0356, 0.0188, 0.0836, 0.158, 0.2522, 0.3634, 1}; 
   
   TH1D *h_dummy__3 = new TH1D("h_dummy__3","h",13, xAxis3);
   h_dummy__3->SetMinimum(0);
   h_dummy__3->SetMaximum(660);
   h_dummy__3->SetEntries(782720);
   h_dummy__3->SetDirectory(0);
   h_dummy__3->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_dummy__3->SetFillColor(ci);
   h_dummy__3->SetMarkerStyle(20);
   h_dummy__3->SetMarkerSize(1.2);
   h_dummy__3->GetXaxis()->SetLabelFont(43);
   h_dummy__3->GetXaxis()->SetLabelSize(0);
   h_dummy__3->GetXaxis()->SetTitleSize(28);
   h_dummy__3->GetXaxis()->SetTickLength(0.02);
   h_dummy__3->GetXaxis()->SetTitleOffset(2);
   h_dummy__3->GetXaxis()->SetTitleFont(43);
   h_dummy__3->GetYaxis()->SetTitle("Events");
   h_dummy__3->GetYaxis()->SetLabelFont(43);
   h_dummy__3->GetYaxis()->SetLabelSize(28);
   h_dummy__3->GetYaxis()->SetTitleSize(28);
   h_dummy__3->GetYaxis()->SetTickLength(0.02);
   h_dummy__3->GetYaxis()->SetTitleOffset(1.448276);
   h_dummy__3->GetYaxis()->SetTitleFont(43);
   h_dummy__3->GetZaxis()->SetLabelFont(43);
   h_dummy__3->GetZaxis()->SetLabelSize(21);
   h_dummy__3->GetZaxis()->SetTitleSize(21);
   h_dummy__3->GetZaxis()->SetTitleFont(43);
   h_dummy__3->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis4[14] = {-1, -0.5, -0.3424, -0.2462, -0.1818, -0.1312, -0.083, -0.0356, 0.0188, 0.0836, 0.158, 0.2522, 0.3634, 1}; 
   
   TH1F *h_stack_stack_1 = new TH1F("h_stack_stack_1","h_stack",13, xAxis4);
   h_stack_stack_1->SetMinimum(-1.098029);
   h_stack_stack_1->SetMaximum(425.5197);
   h_stack_stack_1->SetDirectory(0);
   h_stack_stack_1->SetStats(0);
   h_stack_stack_1->SetLineWidth(2);
   h_stack_stack_1->SetMarkerStyle(20);
   h_stack_stack_1->SetMarkerSize(1.2);
   h_stack_stack_1->GetXaxis()->SetLabelFont(43);
   h_stack_stack_1->GetXaxis()->SetLabelSize(21);
   h_stack_stack_1->GetXaxis()->SetTitleSize(21);
   h_stack_stack_1->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_1->GetXaxis()->SetTitleFont(43);
   h_stack_stack_1->GetYaxis()->SetLabelFont(43);
   h_stack_stack_1->GetYaxis()->SetLabelSize(21);
   h_stack_stack_1->GetYaxis()->SetTitleSize(21);
   h_stack_stack_1->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_1->GetYaxis()->SetTitleFont(43);
   h_stack_stack_1->GetZaxis()->SetLabelFont(43);
   h_stack_stack_1->GetZaxis()->SetLabelSize(21);
   h_stack_stack_1->GetZaxis()->SetTitleSize(21);
   h_stack_stack_1->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_1);
   
   Double_t xAxis5[14] = {-1, -0.5, -0.3424, -0.2462, -0.1818, -0.1312, -0.083, -0.0356, 0.0188, 0.0836, 0.158, 0.2522, 0.3634, 1}; 
   
   TH1D *three_lep_presel_1jet_tWZ_stack_1 = new TH1D("three_lep_presel_1jet_tWZ_stack_1","h",13, xAxis5);
   three_lep_presel_1jet_tWZ_stack_1->SetBinContent(1,9.999998e-07);
   three_lep_presel_1jet_tWZ_stack_1->SetBinContent(2,0.2305399);
   three_lep_presel_1jet_tWZ_stack_1->SetBinContent(3,0.2575558);
   three_lep_presel_1jet_tWZ_stack_1->SetBinContent(4,0.3439256);
   three_lep_presel_1jet_tWZ_stack_1->SetBinContent(5,0.1571897);
   three_lep_presel_1jet_tWZ_stack_1->SetBinContent(6,0.3898134);
   three_lep_presel_1jet_tWZ_stack_1->SetBinContent(7,0.3282802);
   three_lep_presel_1jet_tWZ_stack_1->SetBinContent(8,0.4082322);
   three_lep_presel_1jet_tWZ_stack_1->SetBinContent(9,0.5063389);
   three_lep_presel_1jet_tWZ_stack_1->SetBinContent(10,0.2673451);
   three_lep_presel_1jet_tWZ_stack_1->SetBinContent(11,0.5269427);
   three_lep_presel_1jet_tWZ_stack_1->SetBinContent(12,0.519519);
   three_lep_presel_1jet_tWZ_stack_1->SetBinContent(13,0.2092073);
   three_lep_presel_1jet_tWZ_stack_1->SetBinError(1,9.999998e-07);
   three_lep_presel_1jet_tWZ_stack_1->SetBinError(2,0.06371391);
   three_lep_presel_1jet_tWZ_stack_1->SetBinError(3,0.07782325);
   three_lep_presel_1jet_tWZ_stack_1->SetBinError(4,0.08955542);
   three_lep_presel_1jet_tWZ_stack_1->SetBinError(5,0.06673565);
   three_lep_presel_1jet_tWZ_stack_1->SetBinError(6,0.09173994);
   three_lep_presel_1jet_tWZ_stack_1->SetBinError(7,0.08306992);
   three_lep_presel_1jet_tWZ_stack_1->SetBinError(8,0.08145578);
   three_lep_presel_1jet_tWZ_stack_1->SetBinError(9,0.09623608);
   three_lep_presel_1jet_tWZ_stack_1->SetBinError(10,0.07978945);
   three_lep_presel_1jet_tWZ_stack_1->SetBinError(11,0.0848012);
   three_lep_presel_1jet_tWZ_stack_1->SetBinError(12,0.09388768);
   three_lep_presel_1jet_tWZ_stack_1->SetBinError(13,0.06173506);
   three_lep_presel_1jet_tWZ_stack_1->SetEntries(709);
   three_lep_presel_1jet_tWZ_stack_1->SetDirectory(0);
   three_lep_presel_1jet_tWZ_stack_1->SetStats(0);

   ci = TColor::GetColor("#640169");
   three_lep_presel_1jet_tWZ_stack_1->SetFillColor(ci);
   three_lep_presel_1jet_tWZ_stack_1->SetMarkerStyle(20);
   three_lep_presel_1jet_tWZ_stack_1->SetMarkerSize(1.2);
   three_lep_presel_1jet_tWZ_stack_1->GetXaxis()->SetLabelFont(43);
   three_lep_presel_1jet_tWZ_stack_1->GetXaxis()->SetLabelSize(21);
   three_lep_presel_1jet_tWZ_stack_1->GetXaxis()->SetTitleSize(21);
   three_lep_presel_1jet_tWZ_stack_1->GetXaxis()->SetTitleOffset(1.4);
   three_lep_presel_1jet_tWZ_stack_1->GetXaxis()->SetTitleFont(43);
   three_lep_presel_1jet_tWZ_stack_1->GetYaxis()->SetLabelFont(43);
   three_lep_presel_1jet_tWZ_stack_1->GetYaxis()->SetLabelSize(21);
   three_lep_presel_1jet_tWZ_stack_1->GetYaxis()->SetTitleSize(21);
   three_lep_presel_1jet_tWZ_stack_1->GetYaxis()->SetTitleOffset(1.4);
   three_lep_presel_1jet_tWZ_stack_1->GetYaxis()->SetTitleFont(43);
   three_lep_presel_1jet_tWZ_stack_1->GetZaxis()->SetLabelFont(43);
   three_lep_presel_1jet_tWZ_stack_1->GetZaxis()->SetLabelSize(21);
   three_lep_presel_1jet_tWZ_stack_1->GetZaxis()->SetTitleSize(21);
   three_lep_presel_1jet_tWZ_stack_1->GetZaxis()->SetTitleFont(43);
   h_stack->Add(three_lep_presel_1jet_tWZ_stack_1,"");
   Double_t xAxis6[14] = {-1, -0.5, -0.3424, -0.2462, -0.1818, -0.1312, -0.083, -0.0356, 0.0188, 0.0836, 0.158, 0.2522, 0.3634, 1}; 
   
   TH1D *three_lep_presel_1jet_ttZ_stack_2 = new TH1D("three_lep_presel_1jet_ttZ_stack_2","h",13, xAxis6);
   three_lep_presel_1jet_ttZ_stack_2->SetBinContent(1,9.999998e-07);
   three_lep_presel_1jet_ttZ_stack_2->SetBinContent(2,0.22598);
   three_lep_presel_1jet_ttZ_stack_2->SetBinContent(3,0.3819693);
   three_lep_presel_1jet_ttZ_stack_2->SetBinContent(4,0.470575);
   three_lep_presel_1jet_ttZ_stack_2->SetBinContent(5,0.480069);
   three_lep_presel_1jet_ttZ_stack_2->SetBinContent(6,0.5575061);
   three_lep_presel_1jet_ttZ_stack_2->SetBinContent(7,0.5477392);
   three_lep_presel_1jet_ttZ_stack_2->SetBinContent(8,0.6626052);
   three_lep_presel_1jet_ttZ_stack_2->SetBinContent(9,0.8233738);
   three_lep_presel_1jet_ttZ_stack_2->SetBinContent(10,0.8162843);
   three_lep_presel_1jet_ttZ_stack_2->SetBinContent(11,1.060723);
   three_lep_presel_1jet_ttZ_stack_2->SetBinContent(12,0.7883169);
   three_lep_presel_1jet_ttZ_stack_2->SetBinContent(13,0.4318615);
   three_lep_presel_1jet_ttZ_stack_2->SetBinError(1,9.999998e-07);
   three_lep_presel_1jet_ttZ_stack_2->SetBinError(2,0.02855629);
   three_lep_presel_1jet_ttZ_stack_2->SetBinError(3,0.04368439);
   three_lep_presel_1jet_ttZ_stack_2->SetBinError(4,0.049842);
   three_lep_presel_1jet_ttZ_stack_2->SetBinError(5,0.04761171);
   three_lep_presel_1jet_ttZ_stack_2->SetBinError(6,0.05618042);
   three_lep_presel_1jet_ttZ_stack_2->SetBinError(7,0.05096423);
   three_lep_presel_1jet_ttZ_stack_2->SetBinError(8,0.0603578);
   three_lep_presel_1jet_ttZ_stack_2->SetBinError(9,0.06326029);
   three_lep_presel_1jet_ttZ_stack_2->SetBinError(10,0.06555111);
   three_lep_presel_1jet_ttZ_stack_2->SetBinError(11,0.07161877);
   three_lep_presel_1jet_ttZ_stack_2->SetBinError(12,0.06205737);
   three_lep_presel_1jet_ttZ_stack_2->SetBinError(13,0.04727417);
   three_lep_presel_1jet_ttZ_stack_2->SetEntries(4869);
   three_lep_presel_1jet_ttZ_stack_2->SetDirectory(0);
   three_lep_presel_1jet_ttZ_stack_2->SetStats(0);

   ci = TColor::GetColor("#a90f23");
   three_lep_presel_1jet_ttZ_stack_2->SetFillColor(ci);
   three_lep_presel_1jet_ttZ_stack_2->SetMarkerStyle(20);
   three_lep_presel_1jet_ttZ_stack_2->SetMarkerSize(1.2);
   three_lep_presel_1jet_ttZ_stack_2->GetXaxis()->SetLabelFont(43);
   three_lep_presel_1jet_ttZ_stack_2->GetXaxis()->SetLabelSize(21);
   three_lep_presel_1jet_ttZ_stack_2->GetXaxis()->SetTitleSize(21);
   three_lep_presel_1jet_ttZ_stack_2->GetXaxis()->SetTitleOffset(1.4);
   three_lep_presel_1jet_ttZ_stack_2->GetXaxis()->SetTitleFont(43);
   three_lep_presel_1jet_ttZ_stack_2->GetYaxis()->SetLabelFont(43);
   three_lep_presel_1jet_ttZ_stack_2->GetYaxis()->SetLabelSize(21);
   three_lep_presel_1jet_ttZ_stack_2->GetYaxis()->SetTitleSize(21);
   three_lep_presel_1jet_ttZ_stack_2->GetYaxis()->SetTitleOffset(1.4);
   three_lep_presel_1jet_ttZ_stack_2->GetYaxis()->SetTitleFont(43);
   three_lep_presel_1jet_ttZ_stack_2->GetZaxis()->SetLabelFont(43);
   three_lep_presel_1jet_ttZ_stack_2->GetZaxis()->SetLabelSize(21);
   three_lep_presel_1jet_ttZ_stack_2->GetZaxis()->SetTitleSize(21);
   three_lep_presel_1jet_ttZ_stack_2->GetZaxis()->SetTitleFont(43);
   h_stack->Add(three_lep_presel_1jet_ttZ_stack_2,"");
   Double_t xAxis7[14] = {-1, -0.5, -0.3424, -0.2462, -0.1818, -0.1312, -0.083, -0.0356, 0.0188, 0.0836, 0.158, 0.2522, 0.3634, 1}; 
   
   TH1D *three_lep_presel_1jet_Zgamma_stack_3 = new TH1D("three_lep_presel_1jet_Zgamma_stack_3","h",13, xAxis7);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinContent(1,1e-06);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinContent(2,9.586854);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinContent(3,3.703428);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinContent(4,2.091075);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinContent(5,3.824037);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinContent(6,4.590862);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinContent(7,1.451129);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinContent(8,7.010388);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinContent(9,3.548898);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinContent(10,1.048838);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinContent(11,3.927413);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinContent(12,0.411334);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinContent(13,0.6227031);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinError(1,1e-06);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinError(2,4.748442);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinError(3,3.303618);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinError(4,0.9367306);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinError(5,1.496496);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinError(6,2.196031);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinError(7,1.096478);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinError(8,3.614951);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinError(9,2.122825);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinError(10,0.5938695);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinError(11,3.0853);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinError(12,0.3529273);
   three_lep_presel_1jet_Zgamma_stack_3->SetBinError(13,0.2558311);
   three_lep_presel_1jet_Zgamma_stack_3->SetEntries(406);
   three_lep_presel_1jet_Zgamma_stack_3->SetDirectory(0);
   three_lep_presel_1jet_Zgamma_stack_3->SetStats(0);

   ci = TColor::GetColor("#24a003");
   three_lep_presel_1jet_Zgamma_stack_3->SetFillColor(ci);
   three_lep_presel_1jet_Zgamma_stack_3->SetMarkerStyle(20);
   three_lep_presel_1jet_Zgamma_stack_3->SetMarkerSize(1.2);
   three_lep_presel_1jet_Zgamma_stack_3->GetXaxis()->SetLabelFont(43);
   three_lep_presel_1jet_Zgamma_stack_3->GetXaxis()->SetLabelSize(21);
   three_lep_presel_1jet_Zgamma_stack_3->GetXaxis()->SetTitleSize(21);
   three_lep_presel_1jet_Zgamma_stack_3->GetXaxis()->SetTitleOffset(1.4);
   three_lep_presel_1jet_Zgamma_stack_3->GetXaxis()->SetTitleFont(43);
   three_lep_presel_1jet_Zgamma_stack_3->GetYaxis()->SetLabelFont(43);
   three_lep_presel_1jet_Zgamma_stack_3->GetYaxis()->SetLabelSize(21);
   three_lep_presel_1jet_Zgamma_stack_3->GetYaxis()->SetTitleSize(21);
   three_lep_presel_1jet_Zgamma_stack_3->GetYaxis()->SetTitleOffset(1.4);
   three_lep_presel_1jet_Zgamma_stack_3->GetYaxis()->SetTitleFont(43);
   three_lep_presel_1jet_Zgamma_stack_3->GetZaxis()->SetLabelFont(43);
   three_lep_presel_1jet_Zgamma_stack_3->GetZaxis()->SetLabelSize(21);
   three_lep_presel_1jet_Zgamma_stack_3->GetZaxis()->SetTitleSize(21);
   three_lep_presel_1jet_Zgamma_stack_3->GetZaxis()->SetTitleFont(43);
   h_stack->Add(three_lep_presel_1jet_Zgamma_stack_3,"");
   Double_t xAxis8[14] = {-1, -0.5, -0.3424, -0.2462, -0.1818, -0.1312, -0.083, -0.0356, 0.0188, 0.0836, 0.158, 0.2522, 0.3634, 1}; 
   
   TH1D *three_lep_presel_1jet_Zjets_stack_4 = new TH1D("three_lep_presel_1jet_Zjets_stack_4","h",13, xAxis8);
   three_lep_presel_1jet_Zjets_stack_4->SetBinContent(1,9.999999e-07);
   three_lep_presel_1jet_Zjets_stack_4->SetBinContent(2,32.16811);
   three_lep_presel_1jet_Zjets_stack_4->SetBinContent(3,23.21817);
   three_lep_presel_1jet_Zjets_stack_4->SetBinContent(4,24.78909);
   three_lep_presel_1jet_Zjets_stack_4->SetBinContent(5,23.67364);
   three_lep_presel_1jet_Zjets_stack_4->SetBinContent(6,8.806053);
   three_lep_presel_1jet_Zjets_stack_4->SetBinContent(7,1.325159);
   three_lep_presel_1jet_Zjets_stack_4->SetBinContent(8,8.906109);
   three_lep_presel_1jet_Zjets_stack_4->SetBinContent(9,14.80066);
   three_lep_presel_1jet_Zjets_stack_4->SetBinContent(10,8.331136);
   three_lep_presel_1jet_Zjets_stack_4->SetBinContent(11,5.694504);
   three_lep_presel_1jet_Zjets_stack_4->SetBinContent(12,5.491156);
   three_lep_presel_1jet_Zjets_stack_4->SetBinContent(13,3.43688);
   three_lep_presel_1jet_Zjets_stack_4->SetBinError(1,9.999999e-07);
   three_lep_presel_1jet_Zjets_stack_4->SetBinError(2,17.30326);
   three_lep_presel_1jet_Zjets_stack_4->SetBinError(3,4.589183);
   three_lep_presel_1jet_Zjets_stack_4->SetBinError(4,11.94896);
   three_lep_presel_1jet_Zjets_stack_4->SetBinError(5,11.33943);
   three_lep_presel_1jet_Zjets_stack_4->SetBinError(6,3.035282);
   three_lep_presel_1jet_Zjets_stack_4->SetBinError(7,2.423188);
   three_lep_presel_1jet_Zjets_stack_4->SetBinError(8,2.451673);
   three_lep_presel_1jet_Zjets_stack_4->SetBinError(9,11.23633);
   three_lep_presel_1jet_Zjets_stack_4->SetBinError(10,2.002571);
   three_lep_presel_1jet_Zjets_stack_4->SetBinError(11,1.21721);
   three_lep_presel_1jet_Zjets_stack_4->SetBinError(12,1.429207);
   three_lep_presel_1jet_Zjets_stack_4->SetBinError(13,0.6879026);
   three_lep_presel_1jet_Zjets_stack_4->SetEntries(1987);
   three_lep_presel_1jet_Zjets_stack_4->SetDirectory(0);
   three_lep_presel_1jet_Zjets_stack_4->SetStats(0);

   ci = TColor::GetColor("#57a1f6");
   three_lep_presel_1jet_Zjets_stack_4->SetFillColor(ci);
   three_lep_presel_1jet_Zjets_stack_4->SetMarkerStyle(20);
   three_lep_presel_1jet_Zjets_stack_4->SetMarkerSize(1.2);
   three_lep_presel_1jet_Zjets_stack_4->GetXaxis()->SetLabelFont(43);
   three_lep_presel_1jet_Zjets_stack_4->GetXaxis()->SetLabelSize(21);
   three_lep_presel_1jet_Zjets_stack_4->GetXaxis()->SetTitleSize(21);
   three_lep_presel_1jet_Zjets_stack_4->GetXaxis()->SetTitleOffset(1.4);
   three_lep_presel_1jet_Zjets_stack_4->GetXaxis()->SetTitleFont(43);
   three_lep_presel_1jet_Zjets_stack_4->GetYaxis()->SetLabelFont(43);
   three_lep_presel_1jet_Zjets_stack_4->GetYaxis()->SetLabelSize(21);
   three_lep_presel_1jet_Zjets_stack_4->GetYaxis()->SetTitleSize(21);
   three_lep_presel_1jet_Zjets_stack_4->GetYaxis()->SetTitleOffset(1.4);
   three_lep_presel_1jet_Zjets_stack_4->GetYaxis()->SetTitleFont(43);
   three_lep_presel_1jet_Zjets_stack_4->GetZaxis()->SetLabelFont(43);
   three_lep_presel_1jet_Zjets_stack_4->GetZaxis()->SetLabelSize(21);
   three_lep_presel_1jet_Zjets_stack_4->GetZaxis()->SetTitleSize(21);
   three_lep_presel_1jet_Zjets_stack_4->GetZaxis()->SetTitleFont(43);
   h_stack->Add(three_lep_presel_1jet_Zjets_stack_4,"");
   Double_t xAxis9[14] = {-1, -0.5, -0.3424, -0.2462, -0.1818, -0.1312, -0.083, -0.0356, 0.0188, 0.0836, 0.158, 0.2522, 0.3634, 1}; 
   
   TH1D *three_lep_presel_1jet_ZZ_stack_5 = new TH1D("three_lep_presel_1jet_ZZ_stack_5","h",13, xAxis9);
   three_lep_presel_1jet_ZZ_stack_5->SetBinContent(1,0.4343666);
   three_lep_presel_1jet_ZZ_stack_5->SetBinContent(2,49.73282);
   three_lep_presel_1jet_ZZ_stack_5->SetBinContent(3,61.20551);
   three_lep_presel_1jet_ZZ_stack_5->SetBinContent(4,40.94932);
   three_lep_presel_1jet_ZZ_stack_5->SetBinContent(5,29.9568);
   three_lep_presel_1jet_ZZ_stack_5->SetBinContent(6,25.16736);
   three_lep_presel_1jet_ZZ_stack_5->SetBinContent(7,21.53719);
   three_lep_presel_1jet_ZZ_stack_5->SetBinContent(8,21.2659);
   three_lep_presel_1jet_ZZ_stack_5->SetBinContent(9,19.86669);
   three_lep_presel_1jet_ZZ_stack_5->SetBinContent(10,16.2273);
   three_lep_presel_1jet_ZZ_stack_5->SetBinContent(11,14.49737);
   three_lep_presel_1jet_ZZ_stack_5->SetBinContent(12,11.32243);
   three_lep_presel_1jet_ZZ_stack_5->SetBinContent(13,4.767915);
   three_lep_presel_1jet_ZZ_stack_5->SetBinError(1,0.07379447);
   three_lep_presel_1jet_ZZ_stack_5->SetBinError(2,0.8335454);
   three_lep_presel_1jet_ZZ_stack_5->SetBinError(3,1.235201);
   three_lep_presel_1jet_ZZ_stack_5->SetBinError(4,0.7324715);
   three_lep_presel_1jet_ZZ_stack_5->SetBinError(5,0.7082467);
   three_lep_presel_1jet_ZZ_stack_5->SetBinError(6,0.569045);
   three_lep_presel_1jet_ZZ_stack_5->SetBinError(7,0.5422637);
   three_lep_presel_1jet_ZZ_stack_5->SetBinError(8,0.5094681);
   three_lep_presel_1jet_ZZ_stack_5->SetBinError(9,0.4893399);
   three_lep_presel_1jet_ZZ_stack_5->SetBinError(10,0.5122887);
   three_lep_presel_1jet_ZZ_stack_5->SetBinError(11,0.4103527);
   three_lep_presel_1jet_ZZ_stack_5->SetBinError(12,0.3945327);
   three_lep_presel_1jet_ZZ_stack_5->SetBinError(13,0.3648149);
   three_lep_presel_1jet_ZZ_stack_5->SetEntries(211195);
   three_lep_presel_1jet_ZZ_stack_5->SetDirectory(0);
   three_lep_presel_1jet_ZZ_stack_5->SetStats(0);

   ci = TColor::GetColor("#c48bff");
   three_lep_presel_1jet_ZZ_stack_5->SetFillColor(ci);
   three_lep_presel_1jet_ZZ_stack_5->SetMarkerStyle(20);
   three_lep_presel_1jet_ZZ_stack_5->SetMarkerSize(1.2);
   three_lep_presel_1jet_ZZ_stack_5->GetXaxis()->SetLabelFont(43);
   three_lep_presel_1jet_ZZ_stack_5->GetXaxis()->SetLabelSize(21);
   three_lep_presel_1jet_ZZ_stack_5->GetXaxis()->SetTitleSize(21);
   three_lep_presel_1jet_ZZ_stack_5->GetXaxis()->SetTitleOffset(1.4);
   three_lep_presel_1jet_ZZ_stack_5->GetXaxis()->SetTitleFont(43);
   three_lep_presel_1jet_ZZ_stack_5->GetYaxis()->SetLabelFont(43);
   three_lep_presel_1jet_ZZ_stack_5->GetYaxis()->SetLabelSize(21);
   three_lep_presel_1jet_ZZ_stack_5->GetYaxis()->SetTitleSize(21);
   three_lep_presel_1jet_ZZ_stack_5->GetYaxis()->SetTitleOffset(1.4);
   three_lep_presel_1jet_ZZ_stack_5->GetYaxis()->SetTitleFont(43);
   three_lep_presel_1jet_ZZ_stack_5->GetZaxis()->SetLabelFont(43);
   three_lep_presel_1jet_ZZ_stack_5->GetZaxis()->SetLabelSize(21);
   three_lep_presel_1jet_ZZ_stack_5->GetZaxis()->SetTitleSize(21);
   three_lep_presel_1jet_ZZ_stack_5->GetZaxis()->SetTitleFont(43);
   h_stack->Add(three_lep_presel_1jet_ZZ_stack_5,"");
   Double_t xAxis10[14] = {-1, -0.5, -0.3424, -0.2462, -0.1818, -0.1312, -0.083, -0.0356, 0.0188, 0.0836, 0.158, 0.2522, 0.3634, 1}; 
   
   TH1D *three_lep_presel_1jet_WZ_stack_6 = new TH1D("three_lep_presel_1jet_WZ_stack_6","h",13, xAxis10);
   three_lep_presel_1jet_WZ_stack_6->SetBinContent(1,1.463537);
   three_lep_presel_1jet_WZ_stack_6->SetBinContent(2,154.0797);
   three_lep_presel_1jet_WZ_stack_6->SetBinContent(3,275.892);
   three_lep_presel_1jet_WZ_stack_6->SetBinContent(4,311.0263);
   three_lep_presel_1jet_WZ_stack_6->SetBinContent(5,283.6582);
   three_lep_presel_1jet_WZ_stack_6->SetBinContent(6,271.2816);
   three_lep_presel_1jet_WZ_stack_6->SetBinContent(7,248.0885);
   three_lep_presel_1jet_WZ_stack_6->SetBinContent(8,270.2649);
   three_lep_presel_1jet_WZ_stack_6->SetBinContent(9,250.7272);
   three_lep_presel_1jet_WZ_stack_6->SetBinContent(10,237.6585);
   three_lep_presel_1jet_WZ_stack_6->SetBinContent(11,199.6359);
   three_lep_presel_1jet_WZ_stack_6->SetBinContent(12,157.1897);
   three_lep_presel_1jet_WZ_stack_6->SetBinContent(13,60.76645);
   three_lep_presel_1jet_WZ_stack_6->SetBinError(1,0.2671243);
   three_lep_presel_1jet_WZ_stack_6->SetBinError(2,2.785834);
   three_lep_presel_1jet_WZ_stack_6->SetBinError(3,4.088659);
   three_lep_presel_1jet_WZ_stack_6->SetBinError(4,3.667995);
   three_lep_presel_1jet_WZ_stack_6->SetBinError(5,3.383615);
   three_lep_presel_1jet_WZ_stack_6->SetBinError(6,3.453422);
   three_lep_presel_1jet_WZ_stack_6->SetBinError(7,3.213681);
   three_lep_presel_1jet_WZ_stack_6->SetBinError(8,3.270173);
   three_lep_presel_1jet_WZ_stack_6->SetBinError(9,3.313656);
   three_lep_presel_1jet_WZ_stack_6->SetBinError(10,2.960623);
   three_lep_presel_1jet_WZ_stack_6->SetBinError(11,2.846878);
   three_lep_presel_1jet_WZ_stack_6->SetBinError(12,2.366535);
   three_lep_presel_1jet_WZ_stack_6->SetBinError(13,1.697527);
   three_lep_presel_1jet_WZ_stack_6->SetEntries(531101);
   three_lep_presel_1jet_WZ_stack_6->SetDirectory(0);
   three_lep_presel_1jet_WZ_stack_6->SetStats(0);

   ci = TColor::GetColor("#fe9ccf");
   three_lep_presel_1jet_WZ_stack_6->SetFillColor(ci);
   three_lep_presel_1jet_WZ_stack_6->SetMarkerStyle(20);
   three_lep_presel_1jet_WZ_stack_6->SetMarkerSize(1.2);
   three_lep_presel_1jet_WZ_stack_6->GetXaxis()->SetLabelFont(43);
   three_lep_presel_1jet_WZ_stack_6->GetXaxis()->SetLabelSize(21);
   three_lep_presel_1jet_WZ_stack_6->GetXaxis()->SetTitleSize(21);
   three_lep_presel_1jet_WZ_stack_6->GetXaxis()->SetTitleOffset(1.4);
   three_lep_presel_1jet_WZ_stack_6->GetXaxis()->SetTitleFont(43);
   three_lep_presel_1jet_WZ_stack_6->GetYaxis()->SetLabelFont(43);
   three_lep_presel_1jet_WZ_stack_6->GetYaxis()->SetLabelSize(21);
   three_lep_presel_1jet_WZ_stack_6->GetYaxis()->SetTitleSize(21);
   three_lep_presel_1jet_WZ_stack_6->GetYaxis()->SetTitleOffset(1.4);
   three_lep_presel_1jet_WZ_stack_6->GetYaxis()->SetTitleFont(43);
   three_lep_presel_1jet_WZ_stack_6->GetZaxis()->SetLabelFont(43);
   three_lep_presel_1jet_WZ_stack_6->GetZaxis()->SetLabelSize(21);
   three_lep_presel_1jet_WZ_stack_6->GetZaxis()->SetTitleSize(21);
   three_lep_presel_1jet_WZ_stack_6->GetZaxis()->SetTitleFont(43);
   h_stack->Add(three_lep_presel_1jet_WZ_stack_6,"");
   Double_t xAxis11[14] = {-1, -0.5, -0.3424, -0.2462, -0.1818, -0.1312, -0.083, -0.0356, 0.0188, 0.0836, 0.158, 0.2522, 0.3634, 1}; 
   
   TH1D *three_lep_presel_1jet_VH_other_stack_7 = new TH1D("three_lep_presel_1jet_VH_other_stack_7","h",13, xAxis11);
   three_lep_presel_1jet_VH_other_stack_7->SetBinContent(1,0.02236733);
   three_lep_presel_1jet_VH_other_stack_7->SetBinContent(2,14.50861);
   three_lep_presel_1jet_VH_other_stack_7->SetBinContent(3,27.87572);
   three_lep_presel_1jet_VH_other_stack_7->SetBinContent(4,22.40017);
   three_lep_presel_1jet_VH_other_stack_7->SetBinContent(5,23.85986);
   three_lep_presel_1jet_VH_other_stack_7->SetBinContent(6,18.29734);
   three_lep_presel_1jet_VH_other_stack_7->SetBinContent(7,18.14887);
   three_lep_presel_1jet_VH_other_stack_7->SetBinContent(8,20.29229);
   three_lep_presel_1jet_VH_other_stack_7->SetBinContent(9,17.72789);
   three_lep_presel_1jet_VH_other_stack_7->SetBinContent(10,13.38491);
   three_lep_presel_1jet_VH_other_stack_7->SetBinContent(11,11.98096);
   three_lep_presel_1jet_VH_other_stack_7->SetBinContent(12,6.621515);
   three_lep_presel_1jet_VH_other_stack_7->SetBinContent(13,1.281259);
   three_lep_presel_1jet_VH_other_stack_7->SetBinError(1,0.02211499);
   three_lep_presel_1jet_VH_other_stack_7->SetBinError(2,1.684635);
   three_lep_presel_1jet_VH_other_stack_7->SetBinError(3,2.44559);
   three_lep_presel_1jet_VH_other_stack_7->SetBinError(4,2.070665);
   three_lep_presel_1jet_VH_other_stack_7->SetBinError(5,2.364797);
   three_lep_presel_1jet_VH_other_stack_7->SetBinError(6,1.795398);
   three_lep_presel_1jet_VH_other_stack_7->SetBinError(7,1.720163);
   three_lep_presel_1jet_VH_other_stack_7->SetBinError(8,1.908989);
   three_lep_presel_1jet_VH_other_stack_7->SetBinError(9,1.619993);
   three_lep_presel_1jet_VH_other_stack_7->SetBinError(10,1.540886);
   three_lep_presel_1jet_VH_other_stack_7->SetBinError(11,1.360505);
   three_lep_presel_1jet_VH_other_stack_7->SetBinError(12,0.9731515);
   three_lep_presel_1jet_VH_other_stack_7->SetBinError(13,0.3514546);
   three_lep_presel_1jet_VH_other_stack_7->SetEntries(8869);
   three_lep_presel_1jet_VH_other_stack_7->SetDirectory(0);
   three_lep_presel_1jet_VH_other_stack_7->SetStats(0);

   ci = TColor::GetColor("#999999");
   three_lep_presel_1jet_VH_other_stack_7->SetFillColor(ci);
   three_lep_presel_1jet_VH_other_stack_7->SetMarkerStyle(20);
   three_lep_presel_1jet_VH_other_stack_7->SetMarkerSize(1.2);
   three_lep_presel_1jet_VH_other_stack_7->GetXaxis()->SetLabelFont(43);
   three_lep_presel_1jet_VH_other_stack_7->GetXaxis()->SetLabelSize(21);
   three_lep_presel_1jet_VH_other_stack_7->GetXaxis()->SetTitleSize(21);
   three_lep_presel_1jet_VH_other_stack_7->GetXaxis()->SetTitleOffset(1.4);
   three_lep_presel_1jet_VH_other_stack_7->GetXaxis()->SetTitleFont(43);
   three_lep_presel_1jet_VH_other_stack_7->GetYaxis()->SetLabelFont(43);
   three_lep_presel_1jet_VH_other_stack_7->GetYaxis()->SetLabelSize(21);
   three_lep_presel_1jet_VH_other_stack_7->GetYaxis()->SetTitleSize(21);
   three_lep_presel_1jet_VH_other_stack_7->GetYaxis()->SetTitleOffset(1.4);
   three_lep_presel_1jet_VH_other_stack_7->GetYaxis()->SetTitleFont(43);
   three_lep_presel_1jet_VH_other_stack_7->GetZaxis()->SetLabelFont(43);
   three_lep_presel_1jet_VH_other_stack_7->GetZaxis()->SetLabelSize(21);
   three_lep_presel_1jet_VH_other_stack_7->GetZaxis()->SetTitleSize(21);
   three_lep_presel_1jet_VH_other_stack_7->GetZaxis()->SetTitleFont(43);
   h_stack->Add(three_lep_presel_1jet_VH_other_stack_7,"");
   Double_t xAxis12[14] = {-1, -0.5, -0.3424, -0.2462, -0.1818, -0.1312, -0.083, -0.0356, 0.0188, 0.0836, 0.158, 0.2522, 0.3634, 1}; 
   
   TH1D *three_lep_presel_1jet_WVZ_stack_8 = new TH1D("three_lep_presel_1jet_WVZ_stack_8","h",13, xAxis12);
   three_lep_presel_1jet_WVZ_stack_8->SetBinContent(1,0.002698758);
   three_lep_presel_1jet_WVZ_stack_8->SetBinContent(2,2.57318);
   three_lep_presel_1jet_WVZ_stack_8->SetBinContent(3,2.382814);
   three_lep_presel_1jet_WVZ_stack_8->SetBinContent(4,3.186378);
   three_lep_presel_1jet_WVZ_stack_8->SetBinContent(5,4.332704);
   three_lep_presel_1jet_WVZ_stack_8->SetBinContent(6,2.628398);
   three_lep_presel_1jet_WVZ_stack_8->SetBinContent(7,3.560694);
   three_lep_presel_1jet_WVZ_stack_8->SetBinContent(8,3.842431);
   three_lep_presel_1jet_WVZ_stack_8->SetBinContent(9,3.383204);
   three_lep_presel_1jet_WVZ_stack_8->SetBinContent(10,2.522122);
   three_lep_presel_1jet_WVZ_stack_8->SetBinContent(11,3.143091);
   three_lep_presel_1jet_WVZ_stack_8->SetBinContent(12,3.550168);
   three_lep_presel_1jet_WVZ_stack_8->SetBinContent(13,2.122642);
   three_lep_presel_1jet_WVZ_stack_8->SetBinError(1,0.001511804);
   three_lep_presel_1jet_WVZ_stack_8->SetBinError(2,0.6498711);
   three_lep_presel_1jet_WVZ_stack_8->SetBinError(3,0.4706274);
   three_lep_presel_1jet_WVZ_stack_8->SetBinError(4,0.5981108);
   three_lep_presel_1jet_WVZ_stack_8->SetBinError(5,1.234135);
   three_lep_presel_1jet_WVZ_stack_8->SetBinError(6,0.4274018);
   three_lep_presel_1jet_WVZ_stack_8->SetBinError(7,1.034142);
   three_lep_presel_1jet_WVZ_stack_8->SetBinError(8,1.019679);
   three_lep_presel_1jet_WVZ_stack_8->SetBinError(9,0.6538763);
   three_lep_presel_1jet_WVZ_stack_8->SetBinError(10,0.07268714);
   three_lep_presel_1jet_WVZ_stack_8->SetBinError(11,0.2183014);
   three_lep_presel_1jet_WVZ_stack_8->SetBinError(12,0.4076884);
   three_lep_presel_1jet_WVZ_stack_8->SetBinError(13,0.2257079);
   three_lep_presel_1jet_WVZ_stack_8->SetEntries(23571);
   three_lep_presel_1jet_WVZ_stack_8->SetDirectory(0);
   three_lep_presel_1jet_WVZ_stack_8->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   three_lep_presel_1jet_WVZ_stack_8->SetFillColor(ci);
   three_lep_presel_1jet_WVZ_stack_8->SetMarkerStyle(20);
   three_lep_presel_1jet_WVZ_stack_8->SetMarkerSize(1.2);
   three_lep_presel_1jet_WVZ_stack_8->GetXaxis()->SetLabelFont(43);
   three_lep_presel_1jet_WVZ_stack_8->GetXaxis()->SetLabelSize(21);
   three_lep_presel_1jet_WVZ_stack_8->GetXaxis()->SetTitleSize(21);
   three_lep_presel_1jet_WVZ_stack_8->GetXaxis()->SetTitleOffset(1.4);
   three_lep_presel_1jet_WVZ_stack_8->GetXaxis()->SetTitleFont(43);
   three_lep_presel_1jet_WVZ_stack_8->GetYaxis()->SetLabelFont(43);
   three_lep_presel_1jet_WVZ_stack_8->GetYaxis()->SetLabelSize(21);
   three_lep_presel_1jet_WVZ_stack_8->GetYaxis()->SetTitleSize(21);
   three_lep_presel_1jet_WVZ_stack_8->GetYaxis()->SetTitleOffset(1.4);
   three_lep_presel_1jet_WVZ_stack_8->GetYaxis()->SetTitleFont(43);
   three_lep_presel_1jet_WVZ_stack_8->GetZaxis()->SetLabelFont(43);
   three_lep_presel_1jet_WVZ_stack_8->GetZaxis()->SetLabelSize(21);
   three_lep_presel_1jet_WVZ_stack_8->GetZaxis()->SetTitleSize(21);
   three_lep_presel_1jet_WVZ_stack_8->GetZaxis()->SetTitleFont(43);
   h_stack->Add(three_lep_presel_1jet_WVZ_stack_8,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3003[13] = {
   -0.75,
   -0.4212,
   -0.2943,
   -0.214,
   -0.1565,
   -0.1071,
   -0.0593,
   -0.0084,
   0.0512,
   0.1208,
   0.2051,
   0.3078,
   0.6817};
   Double_t g_totErr_fy3003[13] = {
   1.922974,
   263.1058,
   394.9172,
   405.2568,
   369.9425,
   331.719,
   294.9876,
   332.6528,
   311.3843,
   280.2564,
   240.4669,
   185.8941,
   73.63892};
   Double_t g_totErr_felx3003[13] = {
   0.25,
   0.0788,
   0.0481,
   0.0322,
   0.0253,
   0.0241,
   0.0237,
   0.0272,
   0.0324,
   0.0372,
   0.0471,
   0.0556,
   0.3183};
   Double_t g_totErr_fely3003[13] = {
   0.4200344,
   40.29597,
   59.25543,
   66.47171,
   60.88229,
   56.8446,
   51.89177,
   57.04216,
   54.4331,
   50.0886,
   42.0966,
   32.90155,
   12.85658};
   Double_t g_totErr_fehx3003[13] = {
   0.25,
   0.0788,
   0.0481,
   0.0322,
   0.0253,
   0.0241,
   0.0237,
   0.0272,
   0.0324,
   0.0372,
   0.0471,
   0.0556,
   0.3183};
   Double_t g_totErr_fehy3003[13] = {
   0.4200344,
   40.29597,
   59.25543,
   66.47171,
   60.88229,
   56.8446,
   51.89177,
   57.04216,
   54.4331,
   50.0886,
   42.0966,
   32.90155,
   12.85658};
   grae = new TGraphAsymmErrors(13,g_totErr_fx3003,g_totErr_fy3003,g_totErr_felx3003,g_totErr_fehx3003,g_totErr_fely3003,g_totErr_fehy3003);
   grae->SetName("g_totErr");
   grae->SetTitle("h");
   grae->SetFillColor(1);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3003 = new TH1F("Graph_g_totErr3003","h",100,-1.2,1.2);
   Graph_g_totErr3003->SetMinimum(1.352646);
   Graph_g_totErr3003->SetMaximum(518.7511);
   Graph_g_totErr3003->SetDirectory(0);
   Graph_g_totErr3003->SetStats(0);
   Graph_g_totErr3003->SetLineWidth(2);
   Graph_g_totErr3003->SetMarkerStyle(20);
   Graph_g_totErr3003->SetMarkerSize(1.2);
   Graph_g_totErr3003->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3003->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3003->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3003->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3003->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3003->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3003->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3003->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3003->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3003->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3003->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3003->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3003->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3003->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3003);
   
   grae->Draw("e2");
   
   Double_t Graph_from_three_lep_presel_1jet_data_fx3004[13] = {
   -0.75,
   -0.4212,
   -0.2943,
   -0.214,
   -0.1565,
   -0.1071,
   -0.0593,
   -0.0084,
   0.0512,
   0.1208,
   0.2051,
   0.3078,
   0.6817};
   Double_t Graph_from_three_lep_presel_1jet_data_fy3004[13] = {
   -1,
   230,
   411,
   403,
   324,
   302,
   291,
   326,
   287,
   278,
   241,
   195,
   63};
   Double_t Graph_from_three_lep_presel_1jet_data_felx3004[13] = {
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
   Double_t Graph_from_three_lep_presel_1jet_data_fely3004[13] = {
   0,
   15.15471,
   20.26488,
   20.06652,
   17.9907,
   17.36851,
   17.04891,
   18.0462,
   16.93119,
   16.66329,
   15.51339,
   13.95225,
   7.916122};
   Double_t Graph_from_three_lep_presel_1jet_data_fehx3004[13] = {
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
   Double_t Graph_from_three_lep_presel_1jet_data_fehy3004[13] = {
   0,
   16.18773,
   21.28957,
   21.09146,
   19.01851,
   18.39733,
   18.07826,
   19.07393,
   17.96075,
   17.69332,
   16.54565,
   14.98812,
   8.979266};
   grae = new TGraphAsymmErrors(13,Graph_from_three_lep_presel_1jet_data_fx3004,Graph_from_three_lep_presel_1jet_data_fy3004,Graph_from_three_lep_presel_1jet_data_felx3004,Graph_from_three_lep_presel_1jet_data_fehx3004,Graph_from_three_lep_presel_1jet_data_fely3004,Graph_from_three_lep_presel_1jet_data_fehy3004);
   grae->SetName("Graph_from_three_lep_presel_1jet_data");
   grae->SetTitle("h");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_three_lep_presel_1jet_data3004 = new TH1F("Graph_Graph_from_three_lep_presel_1jet_data3004","h",100,-0.89317,0.82487);
   Graph_Graph_from_three_lep_presel_1jet_data3004->SetMinimum(-44.32896);
   Graph_Graph_from_three_lep_presel_1jet_data3004->SetMaximum(475.6185);
   Graph_Graph_from_three_lep_presel_1jet_data3004->SetDirectory(0);
   Graph_Graph_from_three_lep_presel_1jet_data3004->SetStats(0);
   Graph_Graph_from_three_lep_presel_1jet_data3004->SetLineWidth(2);
   Graph_Graph_from_three_lep_presel_1jet_data3004->SetMarkerStyle(20);
   Graph_Graph_from_three_lep_presel_1jet_data3004->SetMarkerSize(1.2);
   Graph_Graph_from_three_lep_presel_1jet_data3004->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_three_lep_presel_1jet_data3004->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_three_lep_presel_1jet_data3004->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_three_lep_presel_1jet_data3004->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_three_lep_presel_1jet_data3004->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_three_lep_presel_1jet_data3004->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_three_lep_presel_1jet_data3004->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_three_lep_presel_1jet_data3004->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_three_lep_presel_1jet_data3004->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_three_lep_presel_1jet_data3004->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_three_lep_presel_1jet_data3004->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_three_lep_presel_1jet_data3004->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_three_lep_presel_1jet_data3004->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_three_lep_presel_1jet_data3004->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_three_lep_presel_1jet_data3004);
   
   grae->Draw("ep1 ");
   Double_t xAxis13[14] = {-1, -0.5, -0.3424, -0.2462, -0.1818, -0.1312, -0.083, -0.0356, 0.0188, 0.0836, 0.158, 0.2522, 0.3634, 1}; 
   
   TH1D *h_dummy_copy__4 = new TH1D("h_dummy_copy__4","h",13, xAxis13);
   h_dummy_copy__4->SetEntries(782720);
   h_dummy_copy__4->SetDirectory(0);
   h_dummy_copy__4->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_dummy_copy__4->SetFillColor(ci);
   h_dummy_copy__4->SetMarkerStyle(20);
   h_dummy_copy__4->SetMarkerSize(1.2);
   h_dummy_copy__4->GetXaxis()->SetTitle("BDT response");
   h_dummy_copy__4->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__4->GetXaxis()->SetLabelSize(28);
   h_dummy_copy__4->GetXaxis()->SetTitleSize(28);
   h_dummy_copy__4->GetXaxis()->SetTickLength(0.02);
   h_dummy_copy__4->GetXaxis()->SetTitleOffset(2);
   h_dummy_copy__4->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__4->GetYaxis()->SetTitle("Events");
   h_dummy_copy__4->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__4->GetYaxis()->SetLabelSize(28);
   h_dummy_copy__4->GetYaxis()->SetTitleSize(28);
   h_dummy_copy__4->GetYaxis()->SetTickLength(0.02);
   h_dummy_copy__4->GetYaxis()->SetTitleOffset(1.448276);
   h_dummy_copy__4->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__4->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__4->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__4->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__4->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__4->Draw("sameaxis");
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
      tex = new TLatex(0.17,0.7149999,"WVZ\\!: 3\\ell1j");
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
   TLegendEntry *entry=leg->AddEntry("three_lep_presel_1jet_data","Data","ep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("three_lep_presel_1jet_WVZ_stack_8","#it{WVV}","f");

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
   entry=leg->AddEntry("three_lep_presel_1jet_VH_other_stack_7","Other","f");

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
   entry=leg->AddEntry("three_lep_presel_1jet_WZ_stack_6","#it{WZ}","f");

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
   entry=leg->AddEntry("three_lep_presel_1jet_ZZ_stack_5","#it{ZZ}","f");

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
   entry=leg->AddEntry("three_lep_presel_1jet_Zjets_stack_4","Non-prompt","f");

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
   entry=leg->AddEntry("three_lep_presel_1jet_Zgamma_stack_3","#gamma conv.","f");

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
   entry=leg->AddEntry("three_lep_presel_1jet_ttZ_stack_2","#it{t#bar{t}Z}","f");

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
   entry=leg->AddEntry("three_lep_presel_1jet_tWZ_stack_1","#it{WtZ}","f");

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
   c_three_lep_presel_1jet->cd();
   c_three_lep_presel_1jet->Modified();
   c_three_lep_presel_1jet->cd();
   c_three_lep_presel_1jet->SetSelected(c_three_lep_presel_1jet);
}
