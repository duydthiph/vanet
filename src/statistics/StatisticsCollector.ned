//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

package vanet.statistics;
simple StatisticsCollector
{
	parameters:
   		@class(StatisticsCollector);
		string appName = default("StatisticsCollector");
		@signal[fracInfectedSignal](type="double");
		@statistic[fracInfected](title="fracInfected"; source="fracInfectedSignal"; record=vector,mean);

		@signal[sigPdr](type="double");
		@statistic[pdr](title="PacketDeliveryRate"; source="sigPdr"; record=vector,mean);

		@signal[sigNumOkay](type="long");
		@statistic[numOkay](title="NumberOkay"; source="sigNumOkay"; record=vector,mean);
		
		@signal[sigNumError](type="long");
		@statistic[numError](title="NumberError"; source="sigNumError"; record=vector,mean);
}